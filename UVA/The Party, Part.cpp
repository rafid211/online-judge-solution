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

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

#define MX 1005

map<int,vi>node;
int vis[MX];
map<int,int>lev;

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    vis[u]=1;
    lev[u]=0;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        int len=node[top].size();
        for(int i=0;i<len;i++){
            int x=node[top][i];
            if(!vis[x]){
                vis[x]=1;
                lev[x]=lev[top]+1;
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
      node.clear();
      mem(vis,0);
      lev.clear();
      int p,d;
      sii(p,d);
      for(int i=0;i<d;i++){
         int a,b;sii(a,b);
         node[a].pb(b);
         node[b].pb(a);
      }
      bfs(0);
      for(int i=1;i<p;i++){
         pf("%d\n",lev[i]);
      }
      if(t)cout <<endl;
    }
    return 0;
}








