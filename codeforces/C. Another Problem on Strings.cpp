#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1000002];
int main()
{
    ll k;
    cin >> k;
    string s;
    cin >>s;
    dp[0]=1;
    ll c=0,n=0;
    for(ll i=0;i<s.size();i++)
    {
        c+= (s[i]=='1');
        if(c>=k){n+=dp[c-k];}
        dp[c]++;
        //cout <<dp[c]<<" "<<c<<endl;
    }
    cout <<n<<endl;
    return 0;
}
