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

#define MX 30007

vi node[MX];
vi cost[MX];
int lev[MX];
int vis[MX];
void bfs(int s)
{
    vis[s]=1;
    lev[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        int len=node[u].size();
        for(int i=0;i<len;i++){
            int x=node[u][i];
            int dist=cost[u][i];
            if(!vis[x]){
                vis[x]=1;
                lev[x]=lev[u]+dist;
                q.push(x);
            }
        }
    }
}
int main()
{
    int t;
    si(t);
    while(t--){
      for(int i=0;i<MX;i++)node[i].clear();
      for(int i=0;i<MX;i++)cost[i].clear();
      mem(lev,0);
      mem(vis,0);
      int n;
      si(n);
      for(int i=0;i<n-1;i++){
          int u,v,w;
          scanf("%d %d %d",&u,&v,&w);
          node[u].pb(v);
          node[v].pb(u);

          cost[u].pb(w);
          cost[v].pb(w);
      }
      bfs(0);
      int mx=INT_MIN;

      int idx=0;
      for(int i=0;i<n;i++){
         if(mx<lev[i]){
            mx=lev[i];
            idx=i;
         }
      }
      mem(vis,0);
      mem(lev,0);
      bfs(idx);
      mx=INT_MIN;
      for(int i=0;i<n;i++){
         mx=max(mx,lev[i]);
      }
      caseNo;
      pf("%d\n",mx);
    }
    return 0;
}







