#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >>n;
    ll ans=n;
    if(n/10>ans){ans=n/10;}
    if((n%10)+((n/100)*10)>ans){ans=(n%10)+(n/100)*10;}
    cout <<ans<<endl;
    return 0;
}
