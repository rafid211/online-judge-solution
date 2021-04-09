#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
int CASE=0;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define caseNo pf("Case %d: ",++CASE)
#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)

#define nl '\n'
#define mp make_pair
#define x first
#define y second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define uniq(a) a.erase(unique(a.begin(), a.end()), a.end())
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};

//int fx[8]={0,0,1,-1,-1,+1,-1,1};
//int fy[8]={-1,1,0,0,1,1,-1,-1};

#define MX 100005
vi prime;
bool p[MX];
void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i<<1){p[j]=1;}}}}
ll bigmod(ll n,ll p,ll m){ll x=n;ll ans=1;while(p){if(p&1){ans=(ans*x)%m;}x=(x*x)%m;p>>=1;}return ans;}

void get()
{
    prime.pb(2);
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime.pb(i);
    }
}

vector<pii>v;
void factor(int n)
{
    int len=prime.size();
    for(int i=0;i<len&&prime[i]<=n;i++){
        int c=0;
        int x=n;
        while(x/prime[i]){
            c+=x/prime[i];
            x=x/prime[i];
        }
        v.pb({prime[i],c});
    }
}
int main()
{
    sieve();
    get();
    //factor(10);

    ll m=10000019;
    int t;
    si(t);
    while(t--){
      v.clear();
      int n;
      si(n);
      int zero;
      si(zero);
      factor(n);
      ll ans=1;
      bool done=0;
      for(auto x:v){
         if(zero<=x.second){
            done=1;
            ll power=(x.second/zero);
            ll go=bigmod(x.first,power,m);
            ans=((ans%m)*(go%m))%m;
         }
      }
      caseNo;
      if(done){
          pf("%lld\n",ans);
      }
      else puts("-1");

    }
    return 0;
}






