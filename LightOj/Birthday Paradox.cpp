#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        double day;
        int i=0;
        cin >>day;
        double ans=1.0;
        for(i=1;ans>0.5;i++){ans*=(1-(i/day));
            //cout <<ans<<" "<<i<<endl;
        }

        cout <<"Case "<<++cnt<<": "<<i-1<<endl;
    }
    return 0;
}
