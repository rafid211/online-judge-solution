#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;

        ll ans=((n%mod)*(n%mod))%mod;
        cout <<ans<<endl;
    }
    return 0;
}
