#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin >>s>>t;
    int a,b;
    cin >>a>>b;
    int m,n;
    cin >>m>>n;
    int appl[m],orng[n];

    for(int i=0;i<m;i++)cin >>appl[i];

    for(int i=0;i<n;i++)cin >>orng[i];

    int ap=0,c=0;
    for(int i=0;i<m;i++){
        int x = a+appl[i];
        if(x>=s&& x<=t)ap++;
    }
    for(int i=0;i<n;i++){
        int x = b+orng[i];
        if(x>=s&& x<=t)c++;
    }
    cout <<ap<<endl<<c<<endl;
    return 0;
}
