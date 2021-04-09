#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,a;
        cin >>n;
        vector <ll>v(n);
        map<ll,ll>m;
        map<ll,ll>::iterator it;
        for(int i=0;i<n;i++){
            cin >>a;
            m[a]++;
            v[i]=a;
        }
        int ans=0;
        for(it=m.begin();it!=m.end();it++){
            ans+=(it->second)-1;
        }
        cout <<ans<<endl;
        m.clear();
        v.clear();
    }
    return 0;
}
