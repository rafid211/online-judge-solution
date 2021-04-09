#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10];
ll mod=1000000007;
int main()
{

    ll x,y,n;
    cin >>x>>y>>n;
    f[0]=x,f[1]=y;
    for(int i=2;i<=6;i++){
        f[i]=(f[i-1]-f[i-2])%mod;
    }
    n--;
    cout << (f[n%6]+mod)%mod<<endl;
}
