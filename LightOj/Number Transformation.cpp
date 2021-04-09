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

int fx4[]={1,-1,0,0};
int fy4[]={0,0,1,-1};

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 1007
bool p[MX];
vi prime;
int len;
void sieve()
{
    for(int i=2;i<=sqrt(MX);i++){
        if(!p[i]){
            for(int j=i*2;j<=MX;j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=2;i<MX;i++)if(!p[i])prime.pb(i);
    len=prime.size();
    p[1]=1;
}
bool vis[MX];
int lev[MX];
int bfs(int s,int t)
{
    if(s>t)return -1;
    if(s==1)return -1;
    if(s==t)return 0;
    if(!p[s])return -1;
    if(!p[t])return -1;
    vis[s]=1;
    queue<int>q;
    q.push(s);
    lev[s]=0;
    while(!q.empty())
    {
        int n=q.front();//out(n);
        if(n==t){
            return lev[n];
        }
        q.pop();
        int a=n;
        for(int i=0;i<len&&prime[i]<=n;i++){
            if(n%prime[i]==0){
                while(n%prime[i]==0)n/=prime[i];
                int xx=a+prime[i];
                if(!vis[xx] && xx<=t){
                    vis[xx]=1;
                    lev[xx]=lev[a]+1;
                    q.push(xx);
                }
            }
        }
//        if(n>1){
//            int xx=a+n;
//            if(!vis[xx]){
//                vis[xx]=1;
//                lev[xx]=lev[a]+1;
//                q.push(xx);
//            }
//        }

    }
    return -1;

}
int main()
{
    sieve();
    int t;
    si(t);
    while(t--){
      mem(vis,0);
      mem(lev,0);
      int s,t;
      sii(s,t);
      int ans=bfs(s,t);
      caseNo;
      pf("%d\n",ans);
    }
    return 0;
}






