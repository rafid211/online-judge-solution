#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n,ll p,ll mod)
{
    if(p==0)return 1;
    ll x = f(n,p/2,mod);
    x = ((x%mod)*(x%mod))%mod;
    if(p%2){x=((x%mod)*(n%mod))%mod;}
    return x;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        cout <<f(2,n,100000)-1<<endl;
    }
    return 0;
}
