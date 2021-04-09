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
typedef map<int,int>mi;
typedef map<ll,ll>ml;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

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
vi prime;
bool p[MX];
void sieve(){ll sq=sqrt(MX);for(int i=3;i<=sq;i+=2){if(!p[i]){for(int j=i*i;j<MX;j+=i+i){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
void fil()
{
    prime.pb(2);
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime.pb(i);
    }
}
bool chk[102661+100];
ll interval[102661+100];
ll d[102661+100];
ll val[102661+100];
ll x;

int NOD(ll n)
{
    int sp=prime.size();
    int ans=1;
    for(int i=0;prime[i]*prime[i]<=n && i<sp;i++){
        int c=0;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                c++;
            }
            //out(prime[i]);
            ans*=(2*c+1);
        }
    }
    if(n>1){
        ans*=3;
    }
    return ans;
}

ll divisor()
{
    //ll lim=1e10;
    ll mx=INT_MIN;
    for(ll i=2;i<=100000;i++){
        d[i]=NOD(i);
        chk[d[i]]=1;
        mx=max(mx,d[i]);
    }
    return mx;
}
void cal()
{
    //make interval [1-100000] for every odd number k
    ll mx = divisor();
    int pos=0;
    ll k;
    for(k=3;k<=mx;k+=2){
        interval[k]=pos;
        if(!chk[k])continue;
        for(ll i=2;i<=100000;i++){
            if(d[i]==k){
                val[pos++]=(i*i);
            }
        }
    }
    interval[k]=pos;

//    for(int i=interval[5];i<interval[7];i++){
//        out(val[i]);
//    }
}
int khoj(ll n,ll k,char what)
{
    ll f=interval[k],l=interval[k+2]-1;

    ll mid;
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
    sieve();fil();cal();
    //khoj(49,3,'H');

    int t,cnt=0;
    si(t);
    while(t--){
      ll k,h,l;
      slll(k,l,h);
      ll low=khoj(l,k,'L'),high=khoj(h,k,'U');
     // outt(val[low],val[high]);
      pf("%lld\n",high-low+1);
    }
    return 0;
}








