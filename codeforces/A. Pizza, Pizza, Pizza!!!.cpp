#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >>n;
    if(n==0){cout <<0;return 0;}
    cout << ((n+1)%2?n+1:(n+1)/2)<<endl;
    return 0;
}
