#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll a,b,x,y;
        cin >>a>>b>>x>>y;
        //cout <<gcd(a,b)<<" "<<gcd(x,y)<<endl;
        if(gcd(a,b)==gcd(x,y)){puts("YES");}
        else{puts("NO");}
    }
    return 0;
}
