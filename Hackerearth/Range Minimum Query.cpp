#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int a[MAX];
int tree[MAX<<2];
void build(int node,int srt,int en)
{
    if(srt==en){
        tree[node]=a[srt];
        return;
    }
    int mid=(srt+en)/2;
    build(2*node+1,srt,mid);
    build(2*node+2,mid+1,en);
    tree[node]=min(tree[2*node+1],tree[2*node+2]);
}
void update(int node,int srt,int en,int x,int val)
{
    if(x<srt||x>en)return; //out of range
    if(srt==en){
        tree[node]=val;
        a[x]=val;
        return;
    }
    int mid=(srt+en)/2;
    update(2*node+1,srt,mid,x,val);
    update(2*node+2,mid+1,en,x,val);
    tree[node]=min(tree[2*node+1],tree[2*node+2]);
}

int query(int node,int srt,int en,int l,int r)
{
    if(r<srt||l>en)return INT_MAX; // out of range
    if(l<=srt&&en<=r){  // inside range
        return tree[node];
    }
    int mid=(srt+en)/2;
    int p1 = query(2*node+1,srt,mid,l,r);
    int p2 = query(2*node+2,mid+1,en,l,r);
    return min(p1,p2);
}
int main()
{
   int n,q;
   cin >>n>>q;
   for(int i=0;i<n;i++)cin >>a[i];
   build(0,0,n-1);
   while(q--){
      char c;
      int l,r;
      cin >>c>>l>>r;
      if(c=='u'){update(0,0,n-1,l-1,r);}
      else{
         cout << query(0,0,n-1,l-1,r-1)<<endl;
      }
   }
   return 0;
}
