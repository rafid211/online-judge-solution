#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 500005
ll a[mx],tree[mx<<2];
void update1(int node,int s,int e,int index,int val)
{
    if(index<s||index>e)return;
    if(s==e){
        a[index] = val;
        tree[node]++;
        return;
    }
    int mid=(s+e)/2;
    update1(2*node,s,mid,index,val);
    update1(2*node+1,mid+1,e,index,val);
    tree[node]=tree[2*node]+tree[2*node+1];
}
void update2(int node,int s,int e,int index,int val)
{
    if(index<s||index>e)return;
    if(s==e){
        a[index] = val;
        tree[node]--;
        if(tree[node]<0)tree[node]=0;
        return;
    }
    int mid=(s+e)/2;
    update2(2*node,s,mid,index,val);
    update2(2*node+1,mid+1,e,index,val);
    tree[node]=tree[2*node]+tree[2*node+1];
}
ll query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l)return 0;
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
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin >>n>>q;
    while(q--){
        int ty;
        cin >>ty;
        if(ty==1){
            int x;
            cin >>x;
            update1(1,1,n,x,2*a[x]+1);
            for(int i=1;i<=n;i++);
        }
        else if(ty==2){
            int x;
            cin >>x;
            update2(1,1,n,x,a[x]/2);
        }
        else{
            int x,y;
            cin >>x>>y;
            ll ans=query(1,1,n,x,y);
            cout <<ans<<endl;
        }
    }
    return 0;

}
