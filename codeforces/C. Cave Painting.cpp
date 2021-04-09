#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10000000
 bool rem[mx];
int main()
{
    ll n,k,c=0;
    cin >>n>>k;
    for(ll i=1;i<=k&&c!=mx;i++){
        ll x=n%i;
        //cout <<x<<endl;
        if(rem[x]){cout <<"No"<<endl;return 0;}
        rem[x]=true;
    }
    cout <<"Yes"<<endl;
    return 0;
}
