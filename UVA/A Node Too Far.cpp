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

#define MX 10005

map<int,vi>node;
map<int,int>vis;
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    vis[u]=0;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        int len=node[s].size();
        for(int i=0;i<len;i++){
            int x=node[s][i];
            if(!vis.count(x){
                vis[x]=vis[s]+1;
                q.push(x);
            }
        }
    }

}
int main()
{
    int n;
    while(si(n)&&n){
        node.clear();
        while(n--){
            int a,b;
            sii(a,b);
            node[a].pb(b);
            node[b].pb(a);
        }
       // out("done");
        int x,y;
        while(sii(x,y)){
            if(!x&&!y)break;
            vis.clear();
            bfs(x);
            int c=0;
            for(auto xx:vis){
                if(xx.S>y)c++;
            }
            c+=node.size()-vis.size();
            pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++CASE,c,x,y);
        }
    }

    return 0;
}








