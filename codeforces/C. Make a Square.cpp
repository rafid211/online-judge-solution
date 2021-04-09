
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
typedef long long int ll;
typedef unsigned long long ull;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define ASC(a,n) sort(a,a+n);
#define DESC(a,n) sort(a,a+n,greater<int>());
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
#define gcd(a,b) __gcd(a,b);
#define lcm(a, b) ((a)*((b)/gcd(a,b)))
bool issq(string s)
{
    ll n=0;
    for(int i=0;i<s.size();i++){
        n = n*10+s[i]-48;
    }
    int sq=sqrt(n);
    if(sq*sq==n){return true;}
    else{return false;}
}
int main()
{
    fast_io
    string s;
    cin >>s;
    if(issq(s)){
        return out(0),0;
    }
    int mn=INT_MAX;
    int n = s.size();
    for(int i=0;i< (1<<n);i++){string ans="";
        for(int k=0;k<=n-1;k++){
            if((i&(1<<k))!=0){ans+=s[k];}
        }
        if(ans.empty()){continue;}
        if(ans[0]=='0'){continue;}
        if(issq(ans)){
            int x= s.size()-ans.size();
            mn = min(mn,x);
            //out(ans);
        }
    }
    if(mn==INT_MAX){out(-1);}
    else{out(mn);}
    return 0;
}






