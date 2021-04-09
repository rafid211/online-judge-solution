#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e+7;
ll sum=0;
void f(ll x,ll k)
{
    //cout <<x<<" "<<k<<endl;
    if(k==1){
       //x = x%MOD;
       sum=((sum%MOD)+((x*2)%MOD))%MOD;
      // cout <<"sum "<<sum<<endl;
       return;
    }
    f(x*2,k=k-1);
    f(x*2-1,k);
}
ll bm(ll n,ll p)
{
    if(p==0)return 1;
    ll x = bm(n,p/2);
    x = ((x%MOD)*(x%MOD))%MOD;
    if(p%2){x=(x*n)%MOD;}
    return x;
}
int main()
{
    ll x,k;
    cin >>x>>k;
    //cout << bm(2,k)<<endl;
    ll n = bm(2,k);
    f(x,k+1);
    ll ans = ((sum%MOD)/(n%MOD))%MOD;
    cout <<ans<<endl;
    return 0;
}
