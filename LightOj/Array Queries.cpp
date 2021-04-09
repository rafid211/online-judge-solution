#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int a[mx],tree[mx<<2];
void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=a[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}
int query(int node, int s, int e, int l, int r)
{
    if(e<l || r<s)return INT_MAX;
    if(l<=s&&e<=r)return tree[node];
    int mid=(s+e)/2;
    int p1=query(2*node,s,mid,l,r);
    int p2=query(2*node+1,mid+1,e,l,r);
    return min(p1,p2);
}
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        build(1,1,n);
        printf("Case %d:\n",++cnt);
        while(q--){
            int l,r;
            scanf("%d %d",&l,&r);
            int ans=query(1,1,n,l,r);
            printf("%d\n",ans);
        }
    }
    return 0;
}
