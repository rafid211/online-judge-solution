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
        tree[2*node].lazy+=tree[node].lazy;
        tree[2*node+1].lazy+=tree[node].lazy;
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
    update(2*node,s,mid,x,y,val);
    update(2*node+1,mid+1,e,x,y,val);
    prop(2*node,s,mid);
    prop(2*node+1,mid+1,e);
    tree[node].sum=tree[2*node].sum+tree[2*node+1].sum;
}
ll query(int node,int s,int e,int x,int y)
{
    prop(node,s,e);
    if(y<s||x>e)return 0;
    if(x<=s&&e<=y){
        return tree[node].sum;
    }
    int mid=(s+e)/2;
    ll p1=query(2*node,s,mid,x,y);
    ll p2=query(2*node+1,mid+1,e,x,y);
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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        clearALL();

        int n,q;
        scanf("%d %d",&n,&q);
        int i,j,v,x;
        while(q--){
            scanf("%d",&x);
            if(x==0){
                scanf("%d %d %d",&i,&j,&v);
                update(1,1,n,i,j,v);
            }
            else{
                scanf("%d %d",&i,&j);
                ll ans=query(1,1,n,i,j);
                cout <<ans<<endl;
            }
        }
    }
    return 0;
}
