#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){

        vector<ll>v;
        ll n;
        cin >>n;
        string s;
        cin >>s;
        char c;cin >>c;

        for(int i=0;i<n;i++){
            if(s[i]==c)v.push_back(i+1);
        }
        if(!v.size()){
            cout << 0<<endl;
            continue;
        }
        ll nai=0;
        ll len=v.size();
        ll dif=v[0]-1;
        ll x=(dif*(dif+1))/2;
        nai+=x;
        for(int i=1;i<len;i++){
            dif=v[i]-v[i-1]-1;
            x=(dif*(dif+1))/2;
            nai+=x;
        }
        dif=n-v[len-1];
        x=(dif*(dif+1))/2;
        nai+=x;
        ll ans=(n*(n+1))/2;
        cout <<ans-nai<<endl;
    }
}
