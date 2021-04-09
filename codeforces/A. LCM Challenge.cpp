#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >>n;
    ll ans;
    if(n<=4){
        if(n==4)cout << 12<<endl;
        else if(n==3)cout <<6<<endl;
        else if(n==2)cout <<2<<endl;
        else cout <<1<<endl;
        return 0;
    }
    else if(n&1)ans=(n*(n-1)*(n-2));
    else if(n%3!=0){
         ans=(n*(n-1)*(n-3));
    }
    else{
        ans=((n-1)*(n-2)*(n-3));
    }
    cout <<ans<<endl;
    return 0;
}








