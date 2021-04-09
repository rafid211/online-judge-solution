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

#define MX 2507

int vis[MX];
//int level[MX];
vi node[MX];
map<int,int>cnt;
map<int,int>m;
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    vis[u]=1;
    int lev=0;
    m[u]=0;
    while(!q.empty()){
        int s=q.front();
        lev=m[s];
        q.pop();
        int len=node[s].size();
        for(int i=0;i<len;i++){
            int x=node[s][i];
            if(!vis[x]){
                vis[x]=1;
                m[x]=lev+1;
                cnt[lev+1]++;
                q.push(x);
            }
        }
    }
}
int main()
{
    int e;
    si(e);
    for(int i=0;i<e;i++){
        int n;
        si(n);
        while(n--){
            int x;si(x);
            node[i].pb(x);
        }
    }
    int q;
    si(q);
    while(q--){
        mem(vis,0);
        cnt.clear();
        m.clear();
        int src;
        si(src);
        bfs(src);
        int mx=0,idx=0;
        for(auto x:cnt){//outt(x.F,x.S);
            if(mx<x.S){
                mx=x.S;
                idx=x.F;
            }
        }
        if(mx<=0)pf("0\n");
        else pf("%d %d\n",mx,idx);
    }
    return 0;
}








