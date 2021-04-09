#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 2e9
set<ll>s;
void num()
{
    for(ll i=1;i<=mx;i*=2){
        for(ll k=1;k<=mx;k*=3){
            ll n=i*k;
            if(n>mx){break;}
            s.insert(n);
        }
    }
}
int main()
{
    num();
    ll a,b,c=0;
    cin >>a>>b;
    set<ll>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        ll n=*it;
        if(n<=b&&n>=a)c++;
    }
    cout <<c<<endl;
    return 0;
}
