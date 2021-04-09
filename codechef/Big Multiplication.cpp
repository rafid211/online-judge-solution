#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(string s)
{
    ll n=0;
    for(int i=0;i<s.size();i++){
        n=n*10+(s[i]-48);
        n%=3;
    }
    //cout <<n<<endl;
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
       string a,b;
        cin >>a>>b;
        ll n=((f(a)%3)*(f(b)%3))%3;
        cout <<n<<endl;
    }

    return 0;
}
