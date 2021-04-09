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

#define MX 207
//vi prime;
//bool p[MX];

//void sieve(){ll sq=sqrt(MX);for(ll i=3;i<=sq;i+=2){if(!p[i]){for(ll j=i*i;j<MX;j+=i<<1){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){ll x=n;ll ans=1;while(p){if(p&1){ans=(ans*x)%m;}x=(x*x)%m;p>>=1;}return ans;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}

vi node[MX];
int vis[MX];
int col[MX];
bool bfs(int u)
{
    queue<int>q;
    q.push(u);
    vis[u]=1;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        int len=node[s].size();
        for(int i=0;i<len;i++){
            int x=node[s][i];
            if(vis[x]==-1){
                if(vis[s]==0)vis[x]=1;
                else vis[x]=0;

                q.push(x);
            }
            else if(vis[x]==vis[s])return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    int n,l,a,b;
    while(si(n)&&n){
        mem(vis,-1);
        mem(col,0);
        for(int i=0;i<MX;i++)node[i].clear();
        si(l);
        for(int i=0;i<l;i++){
            sii(a,b);
            node[a].pb(b);
            node[b].pb(a);
        }

        if(bfs(0))pf("BICOLORABLE.\n");
        else pf("NOT BICOLORABLE.\n");

    }
    return 0;
}








