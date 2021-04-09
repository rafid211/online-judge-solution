#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1000000007;

ll big(ll n,ll p)
{
    if(p==0)return 1;
    ll x = big(n,p/2);
    x = ((x%mod)*(x%mod))%mod;
    if(p%2)x=(x*n)%mod;
    return x%mod;
}
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,b,n;
        cin >>a>>b>>n;
        if(a==b){
            ll x = ceil(pow(a,n));
            ll y = ceil(pow(a,n));
            cout <<((x%mod)+(y%mod))%mod<<endl;
            continue;
        }
        ll ans=gcd(a+b,abs(a-b));
        cout <<ans%mod<<endl;
    }
    return 0;
}
