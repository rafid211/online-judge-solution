#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=1;i<=n;i++)cin >>a[i];

    int c=1;
    int ans;
    for(int i=1;i<=n;i++){
        if(i==1){
            if(a[i]<=n||(a[i]%n)==0)ans=i;
            a[i]-=c;
        }
        else{
           if((a[i]-c)<=0){ans=i;break;}
           c++;
           a[i]-=c;
        }
    }
    cout <<ans<<endl;
}
