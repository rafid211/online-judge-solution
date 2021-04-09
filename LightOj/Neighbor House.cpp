#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[4][1007];
ll a[4][1007];
int n;
ll solve(int prev,int pos)
{
    if(pos>n)return 0;
    if(dp[prev][pos]!=-1)return dp[prev][pos];
    ll ans=INT_MAX;
    for(int i=1;i<=3;i++){
        if(i!=prev){
            ans=min(ans,solve(i,pos+1)+a[i][pos]);
        }
    }
    return dp[prev][pos]=ans;
}
int main()
{
    int t;
    int cnt=0;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof(dp));
        memset(a,0,sizeof(a));
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            int r,g,b;
            scanf("%d %d %d",&r,&g,&b);
            a[1][i]=r;
            a[2][i]=g;
            a[3][i]=b;
        }
        ll ans=solve(0,1);
        printf("Case %d: %lld\n",++cnt,ans);    
    }
    return 0;
}