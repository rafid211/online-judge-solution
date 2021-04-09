#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ll n;
        cin >>n;
        int c=0;
        ll x=n-1;
        while(x){
            x=x&(x-1);
            c++;
        }
        cout <<((c%2)?"Louise":"Richard")<<endl;
    }
}

