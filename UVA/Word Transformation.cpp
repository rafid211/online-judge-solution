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

#define MX 10005

map<string,int>vis;
vector<string>word;

void bfs(string from,string to)
{
    queue<string>q;
    q.push(from);
    vis[from]=0;
    while(!q.empty()&&vis.count(to)==0){
        string top=q.front();
        q.pop();
        for(int pos=0;pos<word.size();pos++){
            string s=word[pos];
            if(!vis.count(s)&&s.size()==top.size()){
                int c=0;
                for(int i=0;i<s.size();i++){
                    if(s[i]!=top[i])c++;
                }
                if(c==1){
                    vis[s]=vis[top]+1;
                    q.push(s);
                }
            }
        }

    }
}
int main()
{
    //input;
    int t;
    si(t);
    string s,from,to;
    while(t--){
      word.clear();
      while(cin >>s){
         if(s=="*")break;
         word.pb(s);
      }
      cin.ignore();
      string in;
      while(getline(cin,in) && in!=""){
            vis.clear();
            stringstream ss(in);
            ss>>from>>to;
            bfs(from,to);
            cout << from<<" "<<to<<" "<<vis[to]<<endl;
      }
      if(t)cout <<endl;
    }
    return 0;
}








