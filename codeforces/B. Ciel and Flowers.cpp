#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll r,g,b;
    cin >> r>>g>>b;

    ll ans=0;
    for(int i=0;i<3;i++){
        if(r>=i&&g>=i&&b>=i){
            ll x=((r-i)/3)+((g-i)/3)+((b-i)/3);
            x+=i;
            ans=max(x,ans);
        }
    }
    cout << ans<<endl;

    return 0;

}
