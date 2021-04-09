#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
int a[100005],b[100005],tree[3*100005];
//int tree[100005];
//
//int query(int idx){
//   int sum=0;
//   while(idx>0){
//     sum+=tree[idx];
//     idx-=idx&(-idx);
//   }
//   return sum;
//}
//void update(int idx, int n, int x)
//{
//   while(idx<=n)
//   {
//     tree[idx]+=x;
//     idx +=idx& (-idx);
//   }
//}

//segment tree
void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=0;
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
}
void update(int node,int s,int e,int index)
{
    if(index<s || index>e)return;
    if(s>=index&&e<=index){
        tree[node]=1;
        return;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,index);
    update(2*node+1,mid+1,e,index);
    tree[node]=tree[2*node]+tree[2*node+1];
}
int query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l)return 0; //out of range
    if(l<=s&&e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    ll p1=query(2*node,s,mid,l,r);
    ll p2=query(2*node+1,mid+1,e,l,r);
    return p1+p2;
}
int main()
{
    int t;
    si(t);
    while(t--){
       // memset(a,0,sizeof(a));
        //memset(b,0,sizeof(b));
        //memset(tree,0,sizeof(tree));
        int n;
        si(n);
        for(int i=1;i<=n;i++)si(a[i]);
        build(1,1,n);
        for(int i=1;i<=n;i++){
            int p;si(p);b[p]=i;
        }
        ll s=0;
        for(int i=1;i<=n;i++){
            int x=query(1,1,n,b[a[i]],n);
            update(1,1,n,b[a[i]]);
            s+=x;
        }
        cout <<s<<endl;

    }

}
