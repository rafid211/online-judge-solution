#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
Every 3 number there are 2 numbers who are divisible by 3.
1=0
2=1
3=1
4=0
5=1
6=1
7=0
8=1
9=1
*/
ll f(ll n)
{
    ll p=2*(n/3);
    return (p+((n%3==2)?1:0));
}
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        ll a,b;
        cin >>a>>b;
        ll ans=f(b)-f(a-1);
        printf("Case %d: %d\n",++cnt,ans);
    }
    return 0;
}
