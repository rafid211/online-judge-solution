#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >>n;
    ll x,y;
    cin >>x>>y;
    ll xx = max(abs(1-x),abs(1-y));
    ll yy = max(abs(n-x),abs(n-y));

    if(xx==yy)cout <<"White"<<endl;
    else if(xx<yy)cout <<"White"<<endl;
    else if(xx>yy)cout <<"Black"<<endl;
    return 0;
}








