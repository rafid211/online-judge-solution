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

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

#define MX 10005
//vi prime;
//bool p[MX];

//void primes(){prime.pb(2);for(int i=3;i<MX;i+=2)if(!p[i])prime.pb(i);}
//void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i<<1){p[j]=1;}}}primes();}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}

int a[1005],sum=0,mx=INT_MIN,k,n;
bool check(int x)
{

    int c=a[0],night=0;
    for(int i=1;i<=n;i++){
        if(a[i]>x)return 0;
        else if(c+a[i]<=x)c+=a[i];
        else{night++;c=a[i];}
    }
    if(night<=k)return 1;
    return 0;
}
void bin(int n,int k)
{
    int f=mx,l=sum,mid,ans=mx;
    while(l-f>2)
    {
        mid=(f+l)/2;
        if(check(mid)){l=mid;}
        else {f=mid;}
    }
    for(int i=l;i>=f;i--)if(check(i))ans=i;

    pf("%d\n",ans);
    int c=0,go=0;
    for(int i=0;i<n+1;i++){
        c+=a[i];
        if(c>ans){
            pf("%d\n",c-a[i]);
            c=a[i];
            go++;
        }
        if(k-go+1>=n+1-i){
            pf("%d\n",c);
            for(int j=i+1;j<n+1;j++)pf("%d\n",a[j]);
            break;
        }
    }
}
int main()
{
    //input;
    //output;
    int t,cnt=0;
    si(t);
    while(t--){
      sum=0;mx=INT_MIN;
      sii(n,k);
      for(int i=0;i<=n;i++){
         si(a[i]);sum+=a[i];
         mx=max(mx,a[i]);
      }
     // outt(sum,mx);
     caseNo(cnt);
      bin(n,k);

    }
    return 0;
}








