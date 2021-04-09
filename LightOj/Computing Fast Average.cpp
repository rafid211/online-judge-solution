#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct segment
{
    ll lazy,sum;
}tree[100005*4];
void build(int node,int s,int e)
{
    if(s==e){
        return;
    }
    int mid=(s+e)/2;
    build(2*node+1,s,mid);
    build(2*node+2,mid+1,e);
}
void prop(int node,int s,int e)
{
    tree[node].sum=(e-s+1)*tree[node].lazy;
    if(s<e)
    {
        tree[2*node+1].lazy=tree[node].lazy;
        tree[2*node+2].lazy=tree[node].lazy;

    }
    tree[node].lazy=-1;

}
void update(int node,int s,int e,int x,int y,int val)
{
    if(tree[node].lazy!=-1){
        prop(node,s,e);
    }
    if(y<s||x>e)return;
    if(x<=s&&e<=y){
       tree[node].sum=(e-s+1)*val;
       if(s<e){
         tree[2*node+1].lazy=val;
         tree[2*node+2].lazy=val;
       }
       return;
    }
    int mid=(s+e)/2;
    update(2*node+1,s,mid,x,y,val);
    update(2*node+2,mid+1,e,x,y,val);
    tree[node].sum=tree[2*node+1].sum+tree[2*node+2].sum;
}
int qu(int node,int s,int e,int x,int y)
{
    if(tree[node].lazy!=-1){
        prop(node,s,e);
    }
    if(y<s||x>e)return 0;
    if(x<=s&&e<=y){
       return tree[node].sum;
    }
    int mid=(s+e)/2;
    int p1=qu(2*node+1,s,mid,x,y);
    int p2=qu(2*node+2,mid+1,e,x,y);
    return p1+p2;
}
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<100005*3;i++){
            tree[i].lazy=-1;
            tree[i].sum=0;
        }
        int n,q;
        scanf("%d %d",&n,&q);
        build(0,0,n-1);
        printf("Case %d:\n",++cnt);
        while(q--){
            int x;
            scanf("%d",&x);
            if(x==1){
               int i,j,v;
               scanf("%d %d %d",&i,&j,&v);
               update(0,0,n-1,i,j,v);
               //for(int i=0;i<3*n;i++)cout <<tree[i].sum<<" ";cout <<endl;
            }
            else{
                int i,j;
                scanf("%d %d",&i,&j);
                int ans=qu(0,0,n-1,i,j);
                int x=j-i+1;
                if(ans%x){
                   int g=__gcd(ans,x);
                   ans/=g;x/=g;
                   printf("%d/%d\n",ans,x);
                }
                else{
                    printf("%d\n",ans/x);
                }
            }
        }
    }
    return 0;
}
