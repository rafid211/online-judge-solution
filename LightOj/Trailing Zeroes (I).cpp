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
#define MX 1000007
bool p[MX];
//ll d[MX];
int prime[MX];
int k=1;
void sieve()
{
    int sq=sqrt(MX)+1;
    for(int i=3;i<=sq;i+=2){
        if(!p[i]){
            for(int j=i*i;j<MX;j+=i+i){
                p[j]=1;
            }
        }
    }
    prime[0]=2;k=1;
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime[k++]=i;
    }
    //out(prime[prime.size()-1]);
}
ll f(ll n)
{
    ll c=0;
    ll ans=1;//x=prime.size();
    for(ll i=0;i<k && prime[i]*prime[i]<=n;i++){
        c=0;
        while(n%prime[i]==0){
                n/=prime[i];
                c++;
        }
        ans*= (c+1);
    }
    if(n!=1){
        ans*=2;
    }
    return ans;
}
int main()
{
    sieve();
    int t,cnt=0;
    si(t);
    while(t--){
       ll n;
       scanf("%lld",&n);
       ll ans = f(n);
       printf("Case %d: %lld\n",++cnt,ans-1);
    }
    return 0;
}







