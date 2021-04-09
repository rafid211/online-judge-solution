#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    while(n%2==0)n/=2;
    while(n%3==0)n/=3;

    return (n==1);
}
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];

    int g=a[0];
    for(int i=1;i<n;i++){
        g=__gcd(g,a[i]);
    }
//    while(g%2==0)g/=2;
//    while(g%3==0)g/=3;

    for(int i=0;i<n;i++){
        int x = a[i]/g;
        if(!check(x)){
            return cout <<"No"<<endl,0;
        }
    }
    cout <<"Yes"<<endl;

    return 0;
}
