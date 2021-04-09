#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ll n,m;
    cin >>n>>m;
    ll sum=0;
    while(m--){
        ll a,b,k;
        cin >>a>>b>>k;
        sum+=((b-a+1)*k);
    }
    ll ans=sum/n;
    cout <<ans<<endl;
    return 0;
}
