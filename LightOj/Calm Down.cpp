#include <bits/stdc++.h>
using namespace std;
#define PI 2*acos(0)
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        double x,n;
        cin >>x>>n;
        double ans = ((x*sin((PI/n)))/(1+sin((PI/n))));
        cout <<"Case "<<++cnt<<": ";
        cout <<fixed<<setprecision(9)<<ans<<endl;
    }
    return 0;
}
