#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ll r,c;
    cin >>r>>c;
    ll ans= r*5-5+c*2-2-((r-1)%2)*5+((r-1)%2);
    cout <<ans<<endl;
    return 0;
}
