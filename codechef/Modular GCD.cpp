#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int mod=1000000007;
//const int mod=107;
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
ll big(ll n,ll p,const ll dif)
{
    if(p==0)return 1;
    ll x = big(n,p/2,dif);
    x = ((x%dif)*(x%dif))%dif;
    if(p%2){x=(x*n)%dif;}
    return x%dif;
}
ll big2(ll n,ll p)
{
    if(p==0)return 1;
    ll x = big(n,p/2,mod);
    x = ((x%mod)*(x%mod))%mod;
    if(p%2){x=(x*n)%mod;}
    return (2*x)%mod;
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ll a,b,n;
        cin >>a>>b>>n;
        ll dif=abs(a-b);
        ll x,y,p,ans;
        if(dif==0){
             x = big2(a,n);//cout <<x<<endl;
            // y = big2(b,n);
             //ans = (2*x)%mod;
             ans = x%mod;
            cout <<ans<<endl;
            continue;
        }
         x = big(a,n,dif);
         y = big(b,n,dif);
         p = ((x%dif)+(y%dif))%dif;
         if(p==0){ans=dif%mod;}
         else {
            dif=dif%p;
//            cout <<p<<" "<<dif<<endl;
            ans=gcd(p,dif)%mod;
         }
         cout <<ans<<endl;
    }
    return 0;
}
