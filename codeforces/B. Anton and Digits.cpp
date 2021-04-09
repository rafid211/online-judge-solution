#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int k2,k3,k5,k6;
    cin >>k2>>k3>>k5>>k6;
    ll ans=0;
    int m = min(k2,min(k5,k6));
    ans+= 256*m;
    k2-=m;k5-=m;k6-=m;
    m = min(k2,k3);
    ans+= 32*m;
    cout <<ans<<endl;
    return 0;
}
