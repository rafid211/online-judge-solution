#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
ll query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l)return INT_MIN;
    if(l<=s&&e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    ll p1 = query(2*node,s,mid,l,r);
    ll p2 = query(2*node+1,mid+1,e,l,r);
    return max(p1,p2);
}
int main()
{
    int n,q;
    while(1)
    {
        scanf("%d",&n);if(!n)return 0;
        scanf("%d",&q);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        map<int,int>m;
        for(int i=1;i<=n;i++){
            m[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            a[i]=m[a[i]];//cout <<a[i]<<" ";
        }
        //cout <<endl;
        build(1,1,n);
        //for(int i=1;i<=20;i++)cout <<i<<" "<<tree[i]<<endl;
        while(q--){
            int i,j;
            scanf("%d %d",&i,&j);
            cout <<query(1,1,n,i,j)<<endl;
        }
    }
    return 0;
}



