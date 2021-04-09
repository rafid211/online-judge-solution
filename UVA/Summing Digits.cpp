#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll n)
{
    ll rem,sum=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        sum+=rem;
    }
    return sum;
}
int main()
{
    ll n;
    while(scanf("%lld",&n)&&n!=0){
        ll ans= f(f(f(n)));
        printf("%lld\n",ans);
    }
    return 0;
}
