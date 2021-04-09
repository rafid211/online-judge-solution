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

#define MX 10007

int vis[MX];
int toint(string s)
{
    int n=0;
    for(int i=0;i<s.size();i++){
        n=n*10+s[i]-48;
    }
    return n;
}
string tostr(int n)
{
    string s;
    while(n){
        s+=(n%10)+48;
        n/=10;
    }
    reverse(ALL(s));
    //cout <<s;
    return s;
}
bool isprime(int n)
{
    int sq=sqrt(n);
    for(int i=2;i<=sq;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
void bfs(int u)
{
    string s;
    queue<int>q;
    q.push(u);
    vis[u]=0;
    while(!q.empty()){
        int n=q.front();
        q.pop();
        for(int pos=0;pos<4;pos++){
            s=tostr(n);
            if(pos==0){
                for(int i='1';i<='9';i++){
                    s[pos]=(char)i;
                    int x=toint(s);
                    if(vis[x]==-1&&isprime(x)){
                        vis[x]=vis[n]+1;
                        q.push(x);
                    }
                }
            }
            else{
                for(int i='0';i<='9';i++){
                    s[pos]=(char)i;
                    int x=toint(s);
                    if(vis[x]==-1&&isprime(x)){
                        vis[x]=vis[n]+1;
                        q.push(x);
                    }
                }
            }
        }
    }
}
int main()
{
    int t;
    si(t);
    while(t--){
      mem(vis,-1);
      int a,b;
      sii(a,b);
      if(a==b){
        pf("0\n");
        continue;
      }
      bfs(a);
      //cout << vis[b]<<endl;
      if(vis[b]!=-1)pf("%d\n",vis[b]);
      else pf("Impossible\n");
    }
    return 0;
}








