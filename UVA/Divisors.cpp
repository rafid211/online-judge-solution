#include <bits/stdc++.h>
using namespace std;
const int MOD = 100000007;
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
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

#define MX 5000005
bool p[MX];
vi prime;
ll d[MX];
void sieve(){int sq=sqrt(MX);for(int i=3;i<=sq;i+=2){if(!p[i]){for(int j=i*i;j<MX;j+=i+i){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
void getprime()
{
    prime.pb(2);
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime.pb(i);
    }
}
void div(ll n)
{
    ll sp=prime.size();
    ll c=0,ans=1,x=n;
    for(int i=0;prime[i]*prime[i]<=n && i<sp;i++){
        if(n%prime[i]==0){c=0;
            while(n%prime[i]==0){
                n/=prime[i];c++;
            }

        }
    }
    if(n>1){
        v[x].pb(mp(n,1));
    }
}
int main()
{
    sieve();getprime();
    for(int i=1;i<MX;i++){
        div(i);
    }

    ll n,cnt=0;
    while(sl(n)&&n!=0){

    }
    return 0;
}








