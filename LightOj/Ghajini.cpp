#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
struct segment
{
    int mx,mn;

}tree[MAX<<2];
int a[MAX];
void build(int node,int s,int e)
{
    if(s==e){
        tree[node].mx=a[s];
        tree[node].mn=a[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node].mx=max(tree[2*node].mx,tree[2*node+1].mx);
    tree[node].mn=min(tree[2*node].mn,tree[2*node+1].mn);
}
int minQuery(int node,int s,int e,int i,int j)
{
    if(j<s||i>e)return INT_MAX;
    if(i<=s&&e<=j)return tree[node].mn;
    int mid=(s+e)/2;
    int p1=minQuery(2*node,s,mid,i,j);
    int p2=minQuery(2*node+1,mid+1,e,i,j);
    return min(p1,p2);
}

int maxQuery(int node,int s,int e,int i,int j)
{
    if(j<s||i>e)return INT_MIN;
    if(i<=s&&e<=j)return tree[node].mx;
    int mid=(s+e)/2;
    int p1=maxQuery(2*node,s,mid,i,j);
    int p2=maxQuery(2*node+1,mid+1,e,i,j);
    return max(p1,p2);
}

int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n,d;
        scanf("%d %d",&n,&d);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        build(1,1,n);
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            int x=maxQuery(1,1,n,i,i+d-1)-minQuery(1,1,n,i,i+d-1);
            ans=max(x,ans);
        }
        printf("Case %d: %d\n",++cnt,ans);
    }
    return 0;
}
