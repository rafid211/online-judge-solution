#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
typedef long long int ll;
typedef unsigned long long ull;
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
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
int main()
{
   // input;
   // output;
    int t,cnt=0;
    cin >>t;
    while(t--){
        int n;
        ll ans=0;
        cin >>n;
        int pos=0;
        for(int i=0;i<n;i++){int in;
            cin >>in;ans+=abs(in);
            if(in>0)pos++;
        }
        if(pos==0){
            cout <<"Case "<<++cnt<<": inf"<<endl;
        }
        else{
            int g=gcd(ans,pos);
            ans/=g;pos/=g;
            cout <<"Case "<<++cnt<<": "<<ans<<"/"<<pos<<endl;
        }
    }
    return 0;
}
