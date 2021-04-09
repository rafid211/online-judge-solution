#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isp(ll n)
{

    ll sq=sqrt(n);
    for(int i=2;i<=sq;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        if(n==1){
            puts("YES");
            continue;
        }
        if(n==2){
            puts("NO");
            continue;
        }
        if(isp(n+1))puts("NO");
        else puts("YES");
    }
}
