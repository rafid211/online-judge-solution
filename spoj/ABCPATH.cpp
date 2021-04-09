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

int fx4[]={1,-1,0,0};
int fy4[]={0,0,1,-1};

int fx[]={0,0,1,-1,-1,+1,-1,1};
int fy[]={-1,1,0,0,1,1,-1,-1};

#define MX 10005


string grid[55];
bool vis[55][55];
int n,m;

int lev[55][55];
bool valid(int x,int y)
{
    return (x>=0&&x<n&&y>=0&&y<m);
}
int bfs(int x,int y)
{
    vis[x][y]=1;
    queue<pii>q;
    lev[x][y]=1;
    q.push({x,y});
    while(!q.empty()){
        pii u=q.front();
        q.pop();
        //cout << grid[u.x][u.y]<<endl;
        for(int i=0;i<8;i++){
            int dx=u.x+fx[i];
            int dy=u.y+fy[i];
            char nxt=(char)(grid[u.x][u.y]+1);
            if(valid(dx,dy)&&!vis[dx][dy]&&grid[dx][dy]==nxt){
                vis[dx][dy]=1;
                lev[dx][dy]=lev[u.x][u.y]+1;
                q.push({dx,dy});
            }
        }
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx=max(lev[i][j],mx);
        }
    }
   // out(mx);
    return mx;
}
void clr()
{
    for(int i=0;i<55;i++){
        for(int j=0;j<55;j++){
            vis[i][j]=0;
            lev[i][j]=0;
        }
    }
}
int main()
{

    while(sii(n,m)&&(n+m)){
         clr();
         for(int i=0;i<n;i++)cin >>grid[i];
         int ans=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='A'){
                    clr();
                    ans=max(bfs(i,j),ans);

                }
            }
         }
         caseNo;
         pf("%d\n",ans);
    }
    return 0;
}






