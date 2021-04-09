#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ok(string s,ll b)
{
    b=abs(b);
    ll n=0,rem;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){continue;}
        n = n*10+s[i]-48;
        n=n%b;
    }
    //cout <<n<<endl;
    return ((n==0)?true:false);
}
int main()
{
    int t,cnt=0;
    cin >>t;
    string d="divisible",nd="not divisible";
    while(t--){
        string a;
        ll b;
        cin >>a>>b;
        if(ok(a,b)){
            cout <<"Case "<<++cnt<<": "<<d<<endl;
        }
        else{
            cout <<"Case "<<++cnt<<": "<<nd<<endl;
        }
    }
    return 0;
}
