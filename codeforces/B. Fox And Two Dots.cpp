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

#define MX 10005

string grid[55];
bool vis[55][55];
int n,m;
bool valid(int x,int y)
{
    return (x>=0&&x<n&&y>=0&&y<m);

}

bool dfs(int x,int y,char c,int px,int py)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int dx=x+fx[i];
        int dy=y+fy[i];
        if(!valid(dx,dy) || (dx==px&&dy==py)|| grid[dx][dy]!=c){
            continue;
            //dfs(dx,dy,c);
        }
        if(vis[dx][dy])return 1;
        if(dfs(dx,dy,c,x,y))return 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;

    for(int i=0;i<n;i++)cin >>grid[i];

    bool ok=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&&dfs(i,j,grid[i][j],i,j))ok=1;
        }
    }
    if(ok)puts("Yes");
    else puts("No");
    return 0;
}







