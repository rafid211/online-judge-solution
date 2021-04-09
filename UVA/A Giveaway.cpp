#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(scanf("%d",&n)&&n)
    {
        ll cube=round(cbrt(n));
        ll sq = round(sqrt(n));
        if((cube*cube*cube==n)&&(sq*sq==n)){
            cout <<"Special"<<endl;
        }
        else{cout <<"Ordinary"<<endl;}
    }
    return 0;
}
