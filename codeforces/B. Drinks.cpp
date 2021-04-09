#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    double ans=0;
    for(int i=0;i<n;i++){
        double x;cin >>x;
        ans+= (x/100.0);
    }
    cout << fixed<<setprecision(9)<<(ans/(double)n)*100.0<<endl;
}
