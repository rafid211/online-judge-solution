#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        double p,q,dis,ans=0;
        for(int i=0;i<n;i++){
            cin >>p>>q>>dis;
            double inc=p+((p*dis)/100);
            double dec=(inc*dis)/100;
            inc-=dec;
            ans+=(p-inc)*q;//cout <<ans<<endl;
        }
        cout <<fixed<<setprecision(9)<<ans<<endl;
    }
    return 0;
}
