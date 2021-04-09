#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toint(string s)
{
    ll x=0;
    for(int i=0;i<s.size();i++){
        x=x*10+s[i]-48;
    }
    return x;
}
string tostr(ll n)
{
    string s="";
    while(n)
    {
        s+= (n%10)+48;
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        string s;
        char d;
        cin >>s>>d;
        int len=s.size();
        ll ans=1e18+200;
        for(int i=0;i<s.size();i++){
            s+=d;
            string temp;
            ll x=1e18+200;
            for(int j=0;j<s.size();j++){
                temp=s;
                temp.erase(j,1);
                ll num=toint(temp);
                x=min(x,num);
                //cout << j<<" ## "<<temp<<endl;
            }
            s=tostr(x);
            ans=min(x,ans);
        }
        cout <<ans<<endl;
    }
    return 0;
}
