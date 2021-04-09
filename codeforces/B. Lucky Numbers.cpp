#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll val,ans;
set<ll>s;
void check(ll n)
{
    int seven=0,four=0;
    ll x=n;
    while(n)
    {
        if(n%10==4)four++;
        else if(n%10==7)seven++;
        n/=10;
    }
    if(seven==four && four >0){
        s.insert(x);
    }
}
void f(ll n)
{
   if(n>=100000000000)return;
    check(n);
   f(n*10+4);
   f(n*10+7);
}
int main()
{
    cin >>val;
    f(0);
    set<ll>::iterator it;
    it=lower_bound(s.begin(),s.end(),val);
    cout << *it<< endl;
}
