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

#define MX 1007
vi node[MX];
int n,m,k;
bool vis[MX];

int p[MX];
void dfs(int s)
{
    vis[s]=1;
    p[s]++;
    int len=node[s].size();
    for(int i=0;i<len;i++){
        int x=node[s][i];
        if(!vis[x]){
            dfs(x);
        }
    }


}
int main()
{
    int t;
    si(t);
    while(t--){
        mem(vis,0);
        for(int i=0;i<MX;i++)node[i].clear();
        mem(p,0);
        sii(k,n);si(m);
        vi manush(k);
        for(int i=0;i<k;i++){
            si(manush[i]);
        }
        for(int i=0;i<m;i++){
            int a,b;
            sii(a,b);
            node[a].pb(b);
        }
        for(auto x:manush){
            dfs(x);
            mem(vis,0);
        }
        int c=0;
        for(int i=1;i<=n;i++){//outt(i,p[i]);
            if(p[i]==k)c++;
        }
        caseNo;pf("%d\n",c);

    }
    return 0;
}







