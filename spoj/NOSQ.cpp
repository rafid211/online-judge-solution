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

#define MX 100007
//vi prime;
bool p[MX];

//void primes(){prime.pb(2);for(int i=3;i<MX;i+=2)if(!p[i])prime.pb(i);}
//void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i+i){p[j]=1;}}}primes();}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//ll egcd(ll a, ll b, ll *x, ll *y){if(b==0){*x=1;*y=0;return a;}ll x1,y1;ll temp=egcd(b,a%b,&x1,&y1);*x=y1;*y=x1-y1*(a/b);return temp;}

int range[20];
int val[2000000];
int pos=0;
bool chkDig(int n,int d)
{
    int r;
    while(n){
        r=n%10;
        if(r==d)return 1;
        n/=10;
    }
    return 0;
}
void cal()
{
    int sq=sqrt(MX);
    int c=0;
    for(int i=2;i<=sq;i++){
        int x=i*i;
        if(!p[x]){
            for(int j=x;j<=MX;j+=x){
                p[j]=1;//out(j);
                c++;
            }
        }
        //break;
    }
    pos=0;
    for(int digit=0;digit<=9;digit++){
        range[digit]=pos;
        for(int i=1;i<MX;i++){
            if(chkDig(i,digit)&&!p[i]){
                val[pos++]=i;
            }
        }
    }
    range[10]=pos;
    //out(pos);
}

int khoj(int n,int d,char what)
{
    int f=range[d],l=range[d+1]-1;

    int mid;
    if(what=='L'){ //lower bound
        while(f<=l){
            mid=(f+l)/2;
            if(val[mid]==n)l=mid-1;
            else if(val[mid]>n)l=mid-1;
            else f=mid+1;
        }
       // outt(f,val[f]);
        return f;
    }
    while(f<=l){ //upper bound
        mid=(f+l)/2;
        if(val[mid]==n)f=mid+1;
        else if(val[mid]>n)l=mid-1;
        else f=mid+1;
    }
    //outt(f,l);
    return l;

}
int main()
{
    cal();
    int t,cnt=0;
    si(t);
    while(t--){
      int a,b,d;
      siii(a,b,d);
      //int x=range[d],y=range[d+1];
      //outt(x,y);
      int low=khoj(a,d,'L');
      int up =khoj(b,d,'H');
      //outt(up,low);
      pf("%d\n",up-low+1);
    }
    return 0;
}








