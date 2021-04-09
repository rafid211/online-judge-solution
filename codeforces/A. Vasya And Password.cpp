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
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//ll egcd(ll a, ll b, ll *x, ll *y){if(b==0){*x=1;*y=0;return a;}ll x1,y1;ll temp=egcd(b,a%b,&x1,&y1);*x=y1;*y=x1-y1*(a/b);return temp;}

int main()
{
    int t,cnt=0;
    si(t);
    while(t--){
      string s;
      cin >>s;
      int up=0,low=0,dig=0;

      int n=s.size();
      for(int i=0;i<n;i++){
          if(s[i]>='a'&&s[i]<='z')low++;
          else if(s[i]>='A'&&s[i]<='Z')up++;
          else dig++;
      }
      //cout <<low<<" "<<up<<" "<<dig<<endl;
      if(!dig&&up&&low){
         if(up>=low){
            for(int i=0;i<n;i++){
                if(s[i]>='A'&&s[i]<='Z'){s[i]='1';break;}
            }
         }
         else{
            for(int i=0;i<n;i++){
                if(s[i]>='a'&&s[i]<='z'){s[i]='1';break;}
            }
         }
      }
      else if(!up&&dig&&low){
          if(dig>=low){
            for(int i=0;i<n;i++){
                if(s[i]>='0'&&s[i]<='9'){s[i]='A';break;}
            }
         }
         else{
            for(int i=0;i<n;i++){
                if(s[i]>='a'&&s[i]<='z'){s[i]='A';break;}
            }
         }
      }
      else if(!low&&dig&&up){
          if(dig>=up){
            for(int i=0;i<n;i++){
                if(s[i]>='0'&&s[i]<='9'){s[i]='a';break;}
            }
         }
         else{
            for(int i=0;i<n;i++){
                if(s[i]>='A'&&s[i]<='Z'){s[i]='a';break;}
            }
         }
      }
      else if(!up&&!dig&&low){
          for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){s[i]='A';break;}
          }
          for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){s[i]='9';break;}
          }
      }
      else if(!low&&!dig&&up){
          for(int i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z'){s[i]='a';break;}
          }
          for(int i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z'){s[i]='9';break;}
          }
      }
      else if(!up&&!low&&dig){
          for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){s[i]='A';break;}
          }
          for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){s[i]='a';break;}
          }
      }
      cout <<s<<endl;
    }
    return 0;
}








