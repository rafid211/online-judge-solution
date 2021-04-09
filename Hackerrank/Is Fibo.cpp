#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        ll a=0,b=1,c=0;
        while(1){
            c=a+b;a=b;b=c;
            if(c==n||n==0){cout <<"IsFibo"<<endl;break;}
            if(c>n){cout <<"IsNotFibo"<<endl;break;}
        }
    }
    return 0;
}
