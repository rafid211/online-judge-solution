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

#define MX 10005
//enum{white,gray,black};

vi node[105];
int vis[105];
void dfs(int u)
{
    //if(vis[u])return;
    int len=node[u].size();
    for(int i=0;i<len;i++){
        int x=node[u][i];
        if(!vis[x]){
            vis[x]=1;
            dfs(x);
        }
    }
}
int main()
{
    int n;
    while(si(n)&&n){
        for(int i=0;i<105;i++)node[i].clear();
        int i,j;
        while(si(i)&&i){
            while(si(j)&&j){
                node[i].pb(j);
            }
        }
        int q;si(q);
        while(q--){
            mem(vis,0);
            int u;si(u);
            dfs(u);int c=0;
            vi v;
            for(int i=1;i<=n;i++){
                if(!vis[i]){v.pb(i);}
            }
            int len=v.size();
            if(len==0)pf("%d",len);
            else{
                pf("%d ",len);
                for(int i=0;i<len;i++){
                    if(i==0)pf("%d",v[i]);
                    else pf(" %d",v[i]);
                }
            }
            puts("");
        }
    }
    return 0;
}








