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

#define caseNo pf("Case %d:",++CASE)
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

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 507

char grid[MX][MX];
bool vis[MX][MX];
int tot[MX][MX];
struct maze{
  int x,y;
  maze(int a,int b)
  {
      x=a,y=b;
  }
};
int n,m;
bool valid(int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<m);
}
int bfs(int x,int y)
{
    int cnt=0;
    maze s(x,y);
    queue<maze>q;
    q.push(s);
    vis[x][y]=1;
    if(grid[x][y]=='C')cnt++;
    while(!q.empty()){
        maze u=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int newx=u.x+fx[i];
            int newy=u.y+fy[i];
            if(valid(newx,newy)&&!vis[newx][newy]&&grid[newx][newy]!='#'){
                if(grid[newx][newy]=='C')cnt++;
                vis[newx][newy]=1;
                maze v(newx,newy);
                q.push(v);
            }
        }
    }
    return cnt;
}
int main()
{
    int t;
    si(t);
    while(t--){
      mem(vis,0);
      mem(tot,-1);
      int q;
      sii(n,m);si(q);
      for(int i=0;i<n;i++){
         scanf("%s",grid[i]);
      }
//      for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            int c=bfs(i,j);
//            tot[i][j]=c;
//            mem(vis,0);
//        }
//      }
      caseNo;pf("\n");
      while(q--){
         int x,y;
         sii(x,y);
         x--,y--;
         int c=0;
         mem(vis,0);
         if(tot[x][y]==-1){
            c=bfs(x,y);
            tot[x][y]=c;
            pf("%d\n",c);
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(vis[i][j])tot[i][j]=c;
                }
            }
         }
         else{
            pf("%d\n",tot[x][y]);
         }
      }
    }
    return 0;
}

/*

1
4 5 2
..#..
.C#C.
##..#
..C#C
*/





