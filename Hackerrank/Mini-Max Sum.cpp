#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[5];
    for(int i=0;i<5;i++)cin >>a[i];

    sort(a,a+5);

    ll sum=0;
    for(int i=0;i<5;i++)sum+=a[i];

    cout <<sum-a[4]<<" "<<sum-a[0]<<endl;
    return 0;

}
