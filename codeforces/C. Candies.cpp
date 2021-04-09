#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll mid,ll n)
{
    ll sum=0;
    ll cnt=n;
    while(cnt>0){
        ll p=min(cnt,mid);
        sum+=p;
        cnt-=p;
        cnt-=(cnt/10);
    }
    return sum;
}
int main()
{
    ll n;
    cin >>n;
    ll f=1,l=n;
    ll ans;
    while(f<=l){
        ll mid=(f+l)/2;
        ll p =check(mid,n);
        if((p*2)>=n){l=mid-1;ans=mid;}
        else{f=mid+1;}
    }
    cout <<ans<<endl;
    return 0;
}
