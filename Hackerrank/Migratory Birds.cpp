#include <bits/stdc++.h>
using namespace std;
int d[6];
int main()
{
    int n;
    cin >>n;
    int a;
    for(int i=0;i<n;i++)cin >>a,d[a]++;
    int mx=-1;
    for(int i=1;i<=5;i++)mx=max(mx,d[i]);

    for(int i=1;i<=5;i++){
        if(d[i]==mx)return cout <<i<<endl,0;
    }


}
