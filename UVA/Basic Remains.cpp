#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
const int INF = 0x7f7f7f7f;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef map<int,int>mii;
typedef map<ll,ll>mll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define caseNo(x) pf("Case %d: ",++x)
#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

#define nl '\n'
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define uniq(a) a.erase(unique(a.begin(), a.end()), a.end())
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

#define MX 10005
//vi prime;
//bool p[MX];

//void primes(){prime.pb(2);for(int i=3;i<MX;i+=2)if(!p[i])prime.pb(i);}
//void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i+i){p[j]=1;}}}primes();}
ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//ll egcd(ll a, ll b, ll *x, ll *y){if(b==0){*x=1;*y=0;return a;}ll x1,y1;ll temp=egcd(b,a%b,&x1,&y1);*x=y1;*y=x1-y1*(a/b);return temp;}
int b;
string s,r;
ll mod()
{
    ll x=0;
    int len=r.size();
    for(int i=0,k=len-1;i<len;i++,k--){
        int num=r[i]-'0';
        double p=pow(b,k);
        x = x+(num*(ll)p);
    }
    return x;
}
ll cal()
{
    ll m = mod();
    ll x=0;
    int len=s.size();
    for(int i=0,k=len-1;i<len;i++,k--){
        int num=s[i]-'0';
        ll p=bigmod(b,k,m);
        x = (x+(num*p))%m;
    }
    return x;
}

string ans="";
void con(ll n)
{
    if(!n)return;
    ans.pb(((n%b)+48));
    con(n/b);
}
int main()
{
    //input;
    //output;
    while(si(b)&&b){
       ans="";
       cin >>s;
       cin >>r;
       ll x=cal();
       con(x);
       if(ans.size()==0){
            cout <<0<<endl;
            continue;
       }
       reverse(ALL(ans));
       cout <<ans<<nl;
    }
    return 0;
}








