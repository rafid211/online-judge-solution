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

#define MX 1000005
vl pr;
bool p[MX];

//void primes(){pr.pb(2);for(int i=3;i<MX;i+=2)if(!p[i])pr.pb(i);}
//void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i+i){p[j]=1;}}}primes();}
ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//ll egcd(ll a, ll b, ll *x, ll *y){if(b==0){*x=1;*y=0;return a;}ll x1,y1;ll temp=egcd(b,a%b,&x1,&y1);*x=y1;*y=x1-y1*(a/b);return temp;}

ll prime[10]={2,3,5,7,11,13,17,19,23};

ll mul(ll a,ll b,ll c)
{
    ll x=0,y=a%c;
    while(b>0){
        if(b&1){
            x=(x+y)%c;
        }
        y=(y*2)%c;
        b>>=1;
    }
    return x%c;
}
ll modulo(ll a,ll b,ll c)
{
    ll y=a,x=1;
    while(b>0)
    {
        if(b & 1)
        {
            x = mul(x,y,c);
        }
        y = mul(y,y,c);
        b>>=1;
    }
    return x%c;
}
bool Miller(ll p,int k)
{
    if(p%2==0)return 0;

      ll s=p-1;
      while(s%2==0) {
        s/=2;
      }
      for(int i=0;i<k;i++){
        ll a = rand()%(p-1)+1,d=s;
        ll mod = modulo(a,d,p);
        while(d!=p-1&&mod!=1&&mod!=p-1){
           mod = mul(mod,mod,p);
          d*= 2;
        }
        if(mod!=p-1 && d%2==0){
          return false;
        }
      }
      return true;
}
bool ok(ll n)
{
    if(n==1) return 0;
    if(n>1000) return Miller(n,9);
    for(ll i=2;i*i<=n;i++) if(n%i==0) return 0;
    return 1;
}

int main()
{
    int t,cnt=0;
    si(t);
    while(t--){
       ll n;
       sl(n);
       while(n)
       {
           if(ok(n))break;
           n--;//out(n);
       }
       cout <<n<<endl;
    }
    return 0;
}








