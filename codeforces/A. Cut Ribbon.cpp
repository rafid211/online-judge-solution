#include <bits/stdc++.h>
using namespace std;
int a,b,c,n;
int dp[100005];
int main()
{
    cin >>n>>a>>b>>c;
    for(int i=1;i<=n;i++){
        dp[i]=-9999;
        if(i>=a)dp[i]=max(dp[i],dp[i-a]+1);
        if(i>=b)dp[i]=max(dp[i],dp[i-b]+1);
        if(i>=c)dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout << dp[n]<<endl;

}
