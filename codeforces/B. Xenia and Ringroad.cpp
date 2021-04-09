#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >>n>>m;
    int a[m];
    for(int i=0;i<m;i++)cin >>a[i];

    long long ans=0;
    for(int i=0;i<m;i++){
        if(i==0){
            ans+=(a[i]-1);
            continue;
        }
        int x = a[i]-a[i-1];
        if(x<0)x+=n;
        ans+=x;
    }
    cout <<ans<<endl;
}
