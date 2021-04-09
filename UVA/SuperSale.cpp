#include <bits/stdc++.h>
using namespace std;
int p[1001],w[1001];
int n,g;
int dp[1001][32][32];
int func(int i,int weight,int cap)
{
    if(i==n)return 0;
    if(dp[i][weight][cap]!=-1)return dp[i][weight][cap];
    int p1,p2;
    if(weight+w[i]<=cap){
        p1=func(i+1,weight+w[i],cap)+p[i];
    }
    else{p1=0;}
    p2=func(i+1,weight,cap);

    return dp[i][weight][cap]=max(p1,p2);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof(dp));
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d %d",&p[i],&w[i]);
        scanf("%d",&g);
        int ans=0;
        for(int i=0;i<g;i++){
            int can;scanf("%d",&can);
            ans+= func(0,0,can);
        }
        printf("%d\n",ans);
    }
    return 0;
}
