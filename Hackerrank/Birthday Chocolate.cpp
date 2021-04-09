#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin >>a[i];

    int  d,m;
    cin >>d>>m;
    int s=0;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int k=i;k<=i+m-1;k++){
            s+=a[k];
        }
        if(s==d)c++;
        s=0;
    }
    cout <<c<<endl;
    return 0;
}
