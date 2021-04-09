#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int a[mx],tree[mx<<2];
typedef long long ll;
void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=a[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node+1,s,mid);
    build(2*node+2,mid+1,e);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
void update(int node,int s,int e,int index)
{
    if(index<s || index>e)return;
    if(s==e){
        tree[node]=0;
        a[index]=0;
        return;
    }
    int mid=(s+e)/2;
    update(2*node+1,s,mid,index);
    update(2*node+2,mid+1,e,index);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}

void update2(int node,int s,int e,int index,int val)
{
    if(index<s || index>e)return;
    if(s==e){
        tree[node]+=val;
        a[index]+=val;
        return;
    }
    int mid=(s+e)/2;
    update2(2*node+1,s,mid,index,val);
    update2(2*node+2,mid+1,e,index,val);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
int query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l)return 0; //out of range
    if(l<=s&&e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    ll p1=query(2*node+1,s,mid,l,r);
    ll p2=query(2*node+2,mid+1,e,l,r);
    return p1+p2;
}
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        build(0,0,n-1);
        printf("Case %d:\n",++cnt);
        int x;
        while(q--){
            scanf("%d",&x);
            if(x==1){
                int i;scanf("%d",&i);
                printf("%d\n",a[i]);
                update(0,0,n-1,i);
            }
            else if(x==2){
                int i,v;
                scanf("%d %d",&i,&v);
                update2(0,0,n-1,i,v);
            }
            else{
                int i,j;
                scanf("%d %d",&i,&j);
                int ans=query(0,0,n-1,i,j);
                printf("%d\n",ans);
            }
        }
    }
    return 0;
}
