#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >>n;
    ll s[n];
    for(int i=0;i<n;i++)cin>>s[i];

    ll mx=s[0],mn=s[0];
    int x=0,y=0;
    for(int i=1;i<n;i++){
        if(s[i]>mx){x++;mx=s[i];}
        if(s[i]<mn){y++;mn=s[i];}
    }
    cout <<x<<" "<<y<<endl;return 0;
}
