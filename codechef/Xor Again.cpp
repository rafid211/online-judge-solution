#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
int main()
{
    fast_io
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        ll ans=a[0]+a[0];
        for(int i=1;i<n;i++){
            //for(int k=0;k<n;k++){
                ll sum = a[i]+a[i];
                ans ^=sum;//cout <<sum<<endl;
            //}
        }
        cout <<ans<<endl;
    }
    return 0;
}
