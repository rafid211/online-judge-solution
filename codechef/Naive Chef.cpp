#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,a,b;
        cin >>n>>a>>b;
        int x[n],ca[n],cb[n];
        for(int i=0;i<n;i++){ca[i]=0,cb[i]=0;}
        for(int i=0;i<n;i++){
            cin >>x[i];
            if(a==x[i])ca[a]++;
            if(b==x[i])cb[b]++;
        }
        double ans = (double)(((double)ca[a]/(double)n)*((double)cb[b]/(double)n));
        cout <<fixed<<setprecision(9)<<ans<<endl;
    }
    return 0;
}
