#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        ll a=n/2;
        ll b=n-a,ans=1;
        cout <<a*b<<endl;
    }
    return 0;
}
