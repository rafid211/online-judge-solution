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
#define x first
#define y second
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

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 22
bool vis[MX][MX];
int lev[MX][MX];
char grid[MX][MX];

int n,m;
bool valid(int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<m);
}
int bfs(pii s)
{
    queue<pii>q;
    q.push(s);
    vis[s.x][s.y]=1;
    lev[s.x][s.y]=0;
    int ans=0;
    while(!q.empty())
    {
        pii u=q.front();
        q.pop();
        if(grid[u.x][u.y]=='h'){
            ans=lev[u.x][u.y];
            break;
        }
        for(int i=0;i<4;i++){
            int x=u.x+fx[i];
            int y=u.y+fy[i];
            if(valid(x,y)&&!vis[x][y]&&grid[x][y]!='#'&&grid[x][y]!='m'){
                vis[x][y]=1;
                lev[x][y]=lev[u.x][u.y]+1;
                q.push({x,y});
            }
        }

    }
    return ans;
}
int main()
{
    int t;
    si(t);
    while(t--){
      mem(vis,0);
      mem(lev,0);
      sii(n,m);
      for(int i=0;i<n;i++)scanf("%s",grid[i]);

      pii a,b,c;

      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='a')a={i,j};
            if(grid[i][j]=='b')b={i,j};
            if(grid[i][j]=='c')c={i,j};
        }
      }
      int ans=-9999;
      ans=max(ans,bfs(a));
      mem(lev,0);
      mem(vis,0);
      ans=max(ans,bfs(b));
      mem(lev,0);
      mem(vis,0);
      ans=max(ans,bfs(c));
      caseNo;
      pf("%d\n",ans);
    }
    return 0;
}

/*
2
6 8
########
#...c..#
#......#
#.a.h.b#
#......#
########
5 9
#########
#mmm...c#
#ma.h####
#m....b.#
#########


*/




