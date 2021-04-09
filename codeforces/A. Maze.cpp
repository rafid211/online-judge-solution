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

string g[507];
bool vis[507][507];
int c=0;

int n,m,k;
void dfs(int x,int y)
{
    vis[x][y]=1;
    g[x][y]='X';
    c--;
    for(int i=0;i<4;i++){
        int dx=x+fx[i];
        int dy=y+fy[i];
        if(dx>=0&&dx<n&&dy>=0&&dy<m&&c>0&&!vis[dx][dy]&&g[dx][dy]=='.'){
            //c--;
            dfs(dx,dy);
        }
    }
}
int main()
{
    cin >> n>>m>>k;

    for(int i=0;i<n;i++)cin >>g[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='.')c++;
        }
    }
//    cout << c<<endl;
//    return 0;
    c-=k;
    int x=0,y=0;
    bool ok=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='.'){
                x=i,y=j;
                ok=1;
                break;
            }
        }
        if(ok)break;
    }
    //outt(x,y);
    dfs(x,y);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='.')cout <<'X';
            else if(g[i][j]=='X')cout <<'.';
            else cout << g[i][j];
        }cout <<endl;
    }
    return 0;
}







