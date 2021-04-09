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
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define nl '\n'
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

#define MX 1000005
bool p[MX];
void sieve(){
    ll sq=sqrt(MX);
    p[1]=1;
    for(int i=3;i<=sq;i+=2){
        if(!p[i]){
          for(int j=i*i;j<MX;j+=i+i){
              p[j]=1;
            }
        }
    }
}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//vi prime;

int d[MX];
int sum(int n)
{
    int r,s=0;
    while(n){
        r=n%10;
        n/=10;
        s+=r;
    }
    return s;
}
void cal()
{
    d[2]=1;
    int c=1;
    for(int i=3;i<MX;i+=2){
        if((sum(i)==2||sum(i)%2!=0) && !p[i] && !p[sum(i)]){
           c++;
        }
        d[i]=d[i+1]=c;
    }
    //for(int i=2;i<100;i++)outt(i,d[i]);
}
int main()
{
    sieve();cal();
    int t,cnt=0;
    si(t);
    while(t--){
      int a,b;
      sii(a,b);
      int ans = d[b]-d[a-1];
      printf("%d\n",ans);
    }
    return 0;
}








