#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,k,m;
        cin >>n>>k>>m;
        int a[m];
        for(int i=0;i<m;i++)cin >>a[i];

        int s=0,ans;
        for(int i=1;i<m;i++){
            a[i]=a[i-1]+a[i];
        }
        for(int i=0;i<m;i++){
            if(a[i]>=k){ans=i;break;}
        }
        cout <<ans+1<<endl;
    }
    return 0;
}
