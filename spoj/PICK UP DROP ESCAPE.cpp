#include<bits/stdc++.h>
using namespace std;
int n,k,a[22];
int f(int i,int xsum,int cnt)
{
   if(cnt==k)return xsum;
   if(i==n)return 0;
   int mx1=f(i+1,xsum,cnt);
   int mx2=f(i+1,xsum^a[i],cnt+1);

   return max(mx1,mx2);
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        cin >>n>>k;
        for(int i=0;i<n;i++)cin >>a[i];
        cout <<f(0,0,0)<<endl;
    }
    return 0;
}
