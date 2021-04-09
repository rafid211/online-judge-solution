#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(ll n,int dig)
{
    bool ok=1;
    ll x=0,c=0;
    while(ok){
        x=x*10+dig;
        x=x%n;
        c++;
        if(!x){ok=0;}
    }
    return c;
}
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        ll n,x;
        cin >>n>>x;
        ll ans = f(n,x);
        cout <<"Case "<<++cnt<<": "<<ans<<endl;
    }
    return 0;
}
