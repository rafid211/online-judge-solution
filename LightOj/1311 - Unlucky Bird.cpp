#include <bits/stdc++.h>
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double EPS = 1e-9;
using namespace std;
int main()
{
    input;
    fast_io
    int t,cnt=0;
    cin >>t;
    while(t--){
        double v1,v2,v3,a1,a2;
        cin>> v1>>v2>>v3>>a1>>a2;
        double t1 = v1/a1;
        double s1 = (v1*t1)+0.5*(-a1*t1*t1);
        double t2 = v2/a2;
        double s2 = (v2*t2)+0.5*(-a2*t2*t2);

        double d = s1+s2;
        double bird = v3*(max(t1,t2));
        cout <<"Case "<<++cnt<<": ";
        cout <<fixed<<setprecision(9)<<d+EPS<<" "<<bird+EPS<<endl;
    }
    return 0;
}
