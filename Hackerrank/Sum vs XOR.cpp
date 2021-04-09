#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >>n;
    int c=0,rem;
    while(n)
    {
       rem=n%2;
       if(!rem)c++;
       n/=2;
    }
    ll ans=(int)pow(2,c);
    cout << ans<<endl;
}
