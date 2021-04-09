#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100007];
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        for(int i=0;i<n;i++)cin >>a[i];
        sort(a,a+n);
        ll x=a[0];
        for(int i=1;i<n;i++){
            x+=(a[i]-1);
        }
        cout <<x<<endl;

    }
}
