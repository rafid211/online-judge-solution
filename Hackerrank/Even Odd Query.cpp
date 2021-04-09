#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100002];
ll f(ll x,ll y)
{

    if(x>y)return 1;
    ll ans=pow(a[x],f(x+1,y));
   // cout <<a[x]<<" "<<y<<" "<<ans<<endl;
    return ans;
}
int main()
{
    ll n;
    cin >>n;

    for(int i=0;i<n;i++)cin >>a[i];
    ll q;
    cin >>q;
    while(q--){
       ll x,y;
       cin >>x>>y;
       ll ans=f(x-1,y-1);
       if(ans&ans-1){cout <<"Odd"<<endl;}
       else{cout <<"Even"<<endl;}
    }
    return 0;
}
