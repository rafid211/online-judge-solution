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

#define MX 200005

int vis[MX];
vi node[MX];
int b=0,r=0;
enum {white,black,red};
int bfs(int u)
{
    vis[u]=black;
    queue<int>q;
    q.push(u);
    b++;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        int len=node[s].size();
        for(int i=0;i<len;i++){
            int x=node[s][i];
            if(vis[x]==white){
                q.push(x);
                if(vis[s]==black){
                    vis[x]=red;
                    r++;
                }
                else{
                    vis[x]=black;
                    b++;
                }
            }

        }
    }
    return max(r,b);
}
int main()
{
    int t;
    si(t);
    while(t--){
      b=r=0;
      for(int i=0;i<MX;i++)node[i].clear();
      mem(vis,0);
      int n;
      si(n);
      int mn=INT_MAX,mx=INT_MIN;
      for(int i=0;i<n;i++){
          int x,y;
          sii(x,y);
          node[x].pb(y);
          node[y].pb(x);
      }
      int ans=0;
      for(int i=0;i<MX;i++){
         if(vis[i]==white&&!node[i].empty()){
            r=b=0;
            ans+=bfs(i);
         }
      }
      caseNo;
      pf("%d\n",ans);
    }
    return 0;
}






