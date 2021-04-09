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

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 25
string grid[MX];
int vis[MX][MX];
int x,y;
bool valid(int a,int b)
{
    return (a>=0 && a<x && b>=0 && b<y);

}
void bfs(int a,int b)
{
    pii s={a,b};
    queue<pii>q;
    q.push(s);
    vis[a][b]=1;
    pii u;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int xx=u.first+fx[i];
            int yy=u.second+fy[i];
            if(valid(xx,yy)&&grid[xx][yy]=='.'&&!vis[xx][yy]){
                vis[xx][yy]=1;
                q.push({xx,yy});
            }
        }
    }
}
int main()
{
    int t;
    si(t);
    while(t--){
      mem(vis,0);
      //int x,y;
      sii(x,y);
      for(int i=0;i<y;i++)cin >>grid[i];
      swap(x,y);
      int a,b;
      for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(grid[i][j]=='@'){
                a=i,b=j;
                break;
            }
        }
      }
      bfs(a,b);
      int c=0;
      for(int i=0;i<x;i++){
          for(int j=0;j<y;j++){
             if(vis[i][j])c++;
          }
      }
      caseNo;
      pf("%d\n",c);
    }
    return 0;
}

/*
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.

*/




