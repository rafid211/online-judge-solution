#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200007];
ll sum[200007];
int main()
{
    ll n,k;
    cin >> n>>k;

    for(int i=1;i<=n;i++)cin >>a[i],sum[i]=a[i];

    for(int i=1;i<=n;i++){
        sum[i]+=sum[i-1];
    }
    vector<ll>v;
    for(int i=1;i<=n-k+1;i++){
        ll x=sum[i+k-1]-sum[i-1];
        v.push_back(x);
    }

    ll mx=0,x=0,l,r,idx;
    for(int i=0;i<v.size()-k;i++){
        if(v[i]>mx){
            mx=v[i];
            idx=i;
        }
        if(mx+v[i+k]>x){
            x=mx+v[i+k];
            l=idx+1,r=i+k+1;
        }
    }
    cout << l<<" "<<r<<endl;

}
