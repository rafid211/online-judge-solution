#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll num(ll n,ll m)
{
    ll ans=1,i=1;
    while(ans<=n)
    {
        ans=i*m;
        i++;
    }
    return ans;
}
int main()
{
    ll n,m,a,b;
    cin >>n>>m>>a>>b;
    ll ans;
    if(n%m!=0){
        //ll p=num(n,m);
        ll mod = (n%m);
        ans = min((mod*b),((m-mod)*a));
        //cout <<mod<<" "<<p<<endl;
    }
    else if(n%m==0){
        ans=0;
    }
    cout <<ans<<endl;
    return 0;
}
