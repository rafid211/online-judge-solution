#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[500007];
int main()
{
    int n;
    cin >>n;

    ll s=0;
    for(int i=0;i<n;i++)cin >>a[i],s+=a[i];

    if(s%3){
        return cout <<0<<endl,0;
    }
    ll x=(s/3);
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    ll ans=0,c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==2*x)ans+=c;
        if(a[i]==x)c++;
    }
    cout <<ans<<endl;
}
