#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n,a,b;
        cin >>a>>b>>n;
        ll c=0;
        if(n==1){cout <<b<<endl;continue;}
        n--;
        while(n--){
            c=((a%mod)+(b%mod))%mod;
            a=b%mod;b=c%mod;
        }
        cout <<(c%mod)<<endl;
    }
    return 0;
}
