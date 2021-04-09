#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double l,s1,s2,q;
    cin >>l>>s1>>s2;
    int t;
    cin >>t;
    while(t--){
        cin >>q;
        double ans = (sqrt(2)*(l-sqrt(q)))/abs(s2-s1);
        cout <<fixed<<setprecision(20)<<ans<<endl;
    }
    return 0;
}
