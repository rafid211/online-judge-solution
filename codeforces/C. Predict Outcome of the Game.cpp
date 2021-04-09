#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,k,d1,d2;
bool solve()
{
    for(ll i=-1;i<=1;i++){
        for(ll j=-1;j<=1;j++){
            if(i==0 || j==0)continue;
            ll a=i*d1;
            ll b=j*d2;
            ll y = 2*a+b+k;
            ll x1 = (y/3);
            if(y%3)continue;
            ll x2 = x1-a;
            ll x3 = x2-b;
            if(x1>=0&&x1<=k&&x2>=0&&x2<=k&&x3>=0&&x3<=k){
                if(x1<=n/3&&x2<=n/3&&x3<=n/3)return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        cin >>n>>k>>d1>>d2;
        if(n%3){
            cout <<"no"<<endl;
            continue;
        }
        bool ans=solve();

        if(ans)cout <<"yes"<<endl;
        else cout <<"no"<<endl;
    }

    return 0;
}
