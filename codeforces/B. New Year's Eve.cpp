#include <iostream>
using namespace std;
#define ll long long
ll sum(ll n)
{
    ll s=0,x=1;
    for(int i=0;i<64;i++){
        ll a = x<<i;
        if(a<=n){
            s+=a;
            //cout <<s<<endl;
        }
        else break;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    ll n,k;
    cin >>n>>k;
    if(k==1){
        cout <<n<<endl;
        return 0;
    }
    ll x = sum(n);
    cout <<x<<endl;
    return 0;
}
