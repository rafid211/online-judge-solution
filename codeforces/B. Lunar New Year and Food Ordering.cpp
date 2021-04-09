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

#define MX 100007
//vi prime;
//bool p[MX];

//void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i<<1){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){ll x=n;ll ans=1;while(p){if(p&1){ans=(ans*x)%m;}x=(x*x)%m;p>>=1;}return ans;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}

ll rem[MX],cost[MX];

struct food{
    ll a,c,idx;
};
food res[MX];

bool cmp(const food a,const food b)
{
    if(a.c==b.c)return a.idx<b.idx;
    return a.c<b.c;
}
int main()
{
    ll n,m;
    sll(n,m);
    for(int i=1;i<=n;i++)sl(rem[i]);
    for(int i=1;i<=n;i++)sl(cost[i]);

    for(int i=1;i<=n;i++){
        res[i].a=rem[i];
        res[i].c=cost[i];
        res[i].idx=i;
    }
    sort(res,res+n+1,cmp);

    ll total=0,k=1;
    for(int i=0;i<m;i++){
        total=0;
        ll x,y;
        sll(x,y);
        if(rem[x]>=y){
            total+=(cost[x]*y);
            rem[x]-=y;
            y=0;
        }
        else{
            total+=(cost[x]*rem[x]);
            y-=rem[x];
            rem[x]=0;
            while(y>0 && k<=n){
                int id=res[k].idx;
                if(rem[id]>=y){
                    total+=(cost[id]*y);
                    rem[id]-=y;
                    y=0;
                    if(rem[id]==0)k++;
                }
                else{
                    total+=(cost[id]*rem[id]);
                    y-=rem[id];
                    rem[id]=0;
                    k++;
                }
            }
        }
        if(y<=0)cout<<total<<endl;
        else cout <<0<<endl;
    }
    return 0;
}







