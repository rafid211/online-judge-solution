//#include <bits/stdc++.h>
//using namespace std;
//#define MAX 100005
//typedef long long ll;
//struct segment
//{
//    int sum,lazy;
//
//}tree[MAX<<2];
//void update(int node,int s,int e,int x,int y,int val)
//{
//    if(y<s||x>e)return; //out of range
//
//    if(tree[node].lazy){ //update needed
//        tree[node].sum+=(e-s+1)*tree[node].lazy;
//
//        if(s<e){ //update child node
//            tree[2*node+1].lazy+=tree[node].lazy;
//            tree[2*node+2].lazy+=tree[node].lazy;
//        }
//        tree[node].lazy=0;
//        //current node updated;
//    }
//    if(x<=s&&e<=y){ //within range
//        tree[node].sum+= (e-s+1)*val;
//        if(s<e){
//           tree[2*node+1].lazy+=val;
//           tree[2*node+2].lazy+=val;
//        }
//        return;
//    }
//    int mid=(s+e)/2;
//    update(2*node+1,s,mid,x,y,val);
//    update(2*node+2,mid+1,e,x,y,val);
//    tree[node].sum=tree[2*node+1].sum+tree[2*node+2].sum;
//}
//int query(int node,int s,int e,int x,int y)
//{
//    if(y<s||x>e)return 0;
//    if(tree[node].lazy){
//        tree[node].sum+= (e-s+1)*tree[node].lazy;
//        if(s<e){
//            tree[2*node+1].lazy+=tree[node].lazy;
//            tree[2*node+2].lazy+=tree[node].lazy;
//        }
//        tree[node].lazy=0;
//    }
//    if(x<=s&&e<=y){
//        return tree[node].sum;
//    }
//    int mid=(s+e)/2;
//    int p1=query(2*node+1,s,mid,x,y);
//    int p2=query(2*node+2,mid+1,e,x,y);
//    return p1+p2;
//}
//void clearALL()
//{
//    for(int i=0;i<(MAX<<2);i++){
//        tree[i].lazy=0;
//        tree[i].sum=0;
//    }
//}
//int main()
//{
//    int t,cnt=0;
//    scanf("%d",&t);
//    while(t--)
//    {
//        clearALL();
//        int n,q;
//        scanf("%d %d",&n,&q);
//        int i,j,v,x;
//        printf("Case %d:\n",++cnt);
//        while(q--){
//            scanf("%d",&x);
//            if(x==0){
//                scanf("%d %d %d",&i,&j,&v);
//                update(0,0,n-1,i,j,v);
//            }
//            else{
//                scanf("%d %d",&i,&j);
//                int ans=query(0,0,n-1,i,j);
//                printf("%d\n",ans);
//               //cout <<ans<<endl;
//            }
//        }
//    }
//    return 0;
//}
//





#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100005
struct segment
{
    ll sum;
    ll lazy;

}tree[MAX<<2];
void prop(int node,int s,int e)
{
    tree[node].sum+=(e-s+1)*tree[node].lazy;
    if(s<e){
        tree[2*node+1].lazy+=tree[node].lazy;
        tree[2*node+2].lazy+=tree[node].lazy;
    }
    tree[node].lazy=0;
}
void update(int node,int s,int e,int x,int y,int val)
{
    prop(node,s,e);
    if(y<s||x>e)return; //out of range

    if(x<=s&&e<=y){
        tree[node].lazy+=val;
        //tree[node].sum+=val;
        return;
    }
    int mid=(s+e)/2;
    update(2*node+1,s,mid,x,y,val);
    update(2*node+2,mid+1,e,x,y,val);
    prop(2*node+1,s,mid);
    prop(2*node+2,mid+1,e);
    tree[node].sum=tree[2*node+1].sum+tree[2*node+2].sum;
}
ll query(int node,int s,int e,int x,int y)
{
    prop(node,s,e);
    if(y<s||x>e)return 0;
    if(x<=s&&e<=y){
        return tree[node].sum;
    }
    int mid=(s+e)/2;
    ll p1=query(2*node+1,s,mid,x,y);
    ll p2=query(2*node+2,mid+1,e,x,y);
    return p1+p2;
}
void clearALL()
{
    for(int i=0;i<(MAX<<2);i++){
        tree[i].sum=0;
        tree[i].lazy=0;
    }
}
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        clearALL();

        int n,q;
        scanf("%d %d",&n,&q);
        int i,j,v,x;
        printf("Case %d:\n",++cnt);
        while(q--){
            scanf("%d",&x);
            if(x==0){
                scanf("%d %d %d",&i,&j,&v);
                update(0,0,n-1,i,j,v);
            }
            else{
                scanf("%d %d",&i,&j);
                ll ans=query(0,0,n-1,i,j);
                //cout <<ans<<endl;
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}
