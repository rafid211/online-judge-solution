#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,cnt=0;
    cin >>t;
    while(t--){
        ll a,b,c;
        cin >>a>>b>>c;
        int mx= max(max(a,b),c);
        cout <<"Case "<<++cnt<<": ";
        if(mx==a){
            ll x=(b*b+c*c);
            ll y=a*a;
            cout <<((x==y)?"yes":"no")<<endl;
        }
        else if(mx==b){
            ll x=(a*a+c*c);
            ll y=b*b;
            cout <<((x==y)?"yes":"no")<<endl;
        }
        else if(mx==c){
            ll x=(a*a+b*b);
            ll y=c*c;
            cout <<((x==y)?"yes":"no")<<endl;
        }
    }
    return 0;
}
