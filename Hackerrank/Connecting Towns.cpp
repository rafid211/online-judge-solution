#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a;
        ll rout=1;
        int mod=1234567;
        for(int i=0;i<n-1;i++){
            cin >>a;
            rout=((rout%mod)*(a%mod))%mod;
        }
        cout <<rout<<endl;

    }
    return 0;
}
