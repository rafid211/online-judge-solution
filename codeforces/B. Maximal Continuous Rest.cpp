#include <bits/stdc++.h>
using namespace std;
int a[200007];
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)cin >>a[i];

    int one=0;
    int ans=-9;
    int x=0,y=0;
    int i=0;
    while(a[i] && i<n){
        i++;
        x++;
    }
    i=n-1;
    while(a[i]&& i>=0){
        i--;
        y++;
    }

    for(int i=0;i<n;i++){
        if(a[i])one++;
        else {
           ans=max(one,ans);
           one=0;
        }
    }

    cout << max(ans,x+y)<<endl;
    return 0;
}
