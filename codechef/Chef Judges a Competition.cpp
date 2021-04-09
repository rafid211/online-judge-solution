#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n,ta=0,tb=0;
        cin >>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        for(int i=0;i<n;i++){
            cin >>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n-1;i++){
            ta+=a[i];
        }

        for(int i=0;i<n-1;i++){
            tb+=b[i];
        }
       // cout <<ta<<" "<<tb<<endl;
        if(ta==tb){cout <<"Draw"<<endl;}
        else if(ta>tb){cout <<"Bob"<<endl;}
        else{cout <<"Alice"<<endl;}
    }
    return 0;
}
