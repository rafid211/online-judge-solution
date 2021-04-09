#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >>n>>d;
    int x[101];
    for(int i=0;i<n;i++)cin >>x[i];
    int c=0,ans=0;
    sort(x,x+n);
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            if(x[k]-x[i]>d){break;}
            ans=max(ans,k-i+1);
        }
    }
    cout <<n-ans<<endl;
    return 0;
}
