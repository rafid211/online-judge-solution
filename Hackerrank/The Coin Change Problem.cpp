#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll val,m,coin[100],dp[300][300];

ll f(int i,ll total)
{
    //cout <<i<<endl;
    if(i>=m){
        if(total==val)return 1;
        else{return 0;}
    }
    if(dp[i][total]!=-1)return dp[i][total];
    ll p1=0,p2=0;
    if(total+coin[i]<=val){
        p1=f(i,total+coin[i]);
    }
    p2=f(i+1,total);

    return dp[i][total]=p1+p2;
}
int main()
{
    cin >>val>>m;
    memset(dp,-1, sizeof(dp));
    for(int i=0;i<m;i++)cin >>coin[i];
    cout << f(0,0)<<endl;

    return 0;
}
