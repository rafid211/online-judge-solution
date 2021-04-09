#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
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

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define nl '\n'
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/__gcd(a,b)))
#define MX 100005
bool p[MX];
vi prime;
void sieve()
{
    int sq=sqrt(MX);
    for(int i=3;i<=sq;i+=2){
        if(!p[i]){
            for(int j=i*i;j<MX;j+= i+i){
                p[j]=1;
            }
        }
    }
    prime.pb(2);
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime.pb(i);
    }
    //for(auto x:prime)out(x);
}
ll bigmod(ll a,ll p)
{
    if(p==0)return 1;
    ll x = bigmod(a,p/2);
    x = ((x%MOD)*(x%MOD))%MOD;
    if(p%2)x=(x*a)%MOD;
    return x;
}
int main()
{
    sieve();
    //fast_io
    int t,cnt=0;
    si(t);
    while(t--){
       int n,m;
       cin >>n>>m;
       ll sp=prime.size(),c=0;
       ll ans=1;
       for(int i=0;i<sp&&prime[i]*prime[i]<=n;i++){c=0;
            if(n%prime[i]==0){
                while(n%prime[i]==0){
                    n/=prime[i];c++;
                }
                ll x = bigmod(prime[i],(c*m)+1)-1;
                ll y = bigmod(prime[i]-1,MOD-2);
                ll xy = (((x+MOD)%MOD)*((y+MOD)%MOD))%MOD;
                ans = ((ans%MOD)*(xy%MOD))%MOD;
            }
       }
       if(n>1){
          ll x = bigmod(n,m+1)-1;
          ll y = bigmod(n-1,MOD-2);
          ll xy = (((x+MOD)%MOD)*((y+MOD)%MOD))%MOD;
          ans = ((ans%MOD)*(xy%MOD))%MOD;
       }
       printf("Case %d: %lld\n",++cnt,ans);
    }


    return 0;
}







