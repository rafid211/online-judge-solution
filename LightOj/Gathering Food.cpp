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

#define MX 12
string grid[MX];
map<char,pii>m;
bool vis[MX][MX];
int lev[MX][MX];
int n;
bool valid(int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<n);
}
int bfs(char s,char des,pii pos)
{
    pii ss=pos;
    queue<pii>q;
    q.push(ss);
    vis[ss.F][ss.S]=1;
    lev[ss.F][ss.S]=0;
    //cout << grid[ss.F][ss.S]<<endl;
    //grid[ss.F][ss.S]='.';
    while(!q.empty()){
        pii u=q.front();
        q.pop();
        if(grid[u.F][u.S]==des){
            //lev[x][y]=lev[u.F][u.S]+1;
            return lev[u.F][u.S];
        }
        for(int i=0;i<4;i++){
            int x=u.F+fx[i];
            int y=u.S+fy[i];
            if(valid(x,y)&&grid[x][y]!='#'&&!vis[x][y]){
                if(grid[x][y]>des && des<='Z'){
                   //cout << grid[x][y]<<endl;
                    continue;
                }
                //cout<<x<<y<<" "<< grid[x][y]<<endl;
                vis[x][y]=1;
                lev[x][y]=lev[u.F][u.S]+1;
                q.push(mp(x,y));

            }
        }

    }
    return -1;

}

int main()
{
    int t;
    si(t);
    while(t--){
     // puts("");
      m.clear();
      mem(vis,0);
      mem(lev,0);
      si(n);
      for(int i=0;i<n;i++)cin >>grid[i];
      int k=0;
      vector<char>v;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              if(grid[i][j]>='A' && grid[i][j]<='Z'){
                  char c=grid[i][j];
                  m[c]=mp(i,j);
                  v.pb(c);
                  k++;
              }
          }
      }
      sort(ALL(v));
      int ans=0;

      for(int i=0,j=1;j<=k-1;j++,i++){
          //cout << v[i]<<" -> "<<v[i+1]<<endl;
          int x=bfs(v[i],v[i+1],m[v[i]]);
         // pr();
         // cout << v[i]<<" -> "<<v[i+1]<<" "<<x<<endl<<endl;
          if(x==-1){
            ans=-1;
            break;
          }
          ans+=x;
          mem(vis,0);
          mem(lev,0);
      }
      caseNo;
      if(ans==-1)pf("Impossible\n");
      else pf("%d\n",ans);
    }
    return 0;
}
/*
4
.ID#
GA..
H#E.
FC.B

4
.I.#
G...
H#E.
F...
*/






