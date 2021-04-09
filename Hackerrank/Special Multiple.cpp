#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n(ll i)
{
    if(i==1){return 1;}
    return (i%2)?10*n(i/2)+1:10*n(i/2);
}
int main()
{

    int t;
    cin >>t;
    while(t--){
        ll num,v;
        cin >>num;
        ll i=1;
        while(1){
            v=n(i)*9;
            if(v%num==0)break;
            i++;
        }
        cout <<v<<endl;
    }
    return 0;
}
