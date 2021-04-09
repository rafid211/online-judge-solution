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

int fx[]={-1,0,0};
int fy[]={0,1,-1};

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 10005

vector<string>node;
int vis[10][10];
const string des="IEHOVA#";
const string path[3]={"forth","right","left"};
vector<string>ans;
void dfs(int x,int y,int idx,int m,int n)
{
    if(node[x][y]=='#'){
        for(int i=0;i<idx;i++){
            if(i==0)cout <<ans[i];
            else cout <<" "<< ans[i];
        }
        cout <<endl;
    }
    for(int i=0;i<3;i++){
        int xx=x+fx[i];int yy=y+fy[i];
        if(xx>=0&&xx<m&&yy>=0&&yy<n&&des[idx]==node[xx][yy]){
            ans.pb(path[i]);
            dfs(xx,yy,idx+1,m,n);
        }
    }
}
int main()
{
   // input;
    int t;
    si(t);
    while(t--){
      ans.clear();
    node.clear();
      int m,n;
      sii(m,n);
      for(int i=0;i<m;i++){
         string s;cin >>s;
         node.pb(s);
      }
      int x,y;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(node[i][j]=='@'){
                dfs(i,j,0,m,n);
            }
        }
      }

    }
    return 0;
}








