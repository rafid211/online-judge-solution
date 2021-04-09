#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[120005];
int main()
{
    int n;
    cin >>n;
    map<ll,ll>m;
    for(int i=0;i<n;i++){cin >>a[i];m[a[i]]++;}

    int c=0;
    for(int i=0;i<n;i++){
        ll x=a[i];
        m[x]--;bool ok=1;
        for(int k=0;k<32;k++){
            ll p= (1<<k)-x; //cout <<x<<" "<<p<<endl;
            if(m[p]){ok=0;break;}
        }
        if(ok)c++;
        m[x]++;
    }
    cout <<c<<endl;
    return 0;

}
