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
struct word{
    string a,b,c;
    word(string a,string b,string c)
    {
        this->a=a;this->b=b;this->c=c;
    }
    word(){}
};

word w[60];
int n;
char up(char c)
{
    if(c=='z')return 'a';
    return (char)c+1;
}
char down(char c)
{
    if(c=='a')return 'z';
    return (char)c-1;
}
bool khoj(string s,char c)
{
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]==c)return 1;
    }
    return 0;
}
bool check(string xx)
{
    int cnt=0;
    if(!n)return 1;
    char a=xx[0],b=xx[1],c=xx[2];
    for(int i=0;i<n;i++){
        string x=w[i].a,y=w[i].b,z=w[i].c;
        if(khoj(x,a)&&khoj(y,b)&&khoj(z,c))return 0;
    }
    return 1;
}
map<string,bool>vis;
map<string,int>lev;
int bfs(string s,string des)
{
    if(!check(s))return -1;
    if(!check(des))return -1;

    queue<string>q;
    if(check(s)){//out(s);
        vis[s]=1;
        q.push(s);
        lev[s]=0;
    }
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        if(check(u)&&u==des){
            return lev[des];
        }
        string temp;
        for(int i=0;i<3;i++){
            temp=u;char x=u[i],fix=x;
            temp[i]=up(x);
            if(check(temp)){
                if(!vis[temp]){
                    vis[temp]=1;
                    lev[temp]=lev[u]+1;
                    q.push(temp);
                }
            }
            temp[i]=fix;
            temp[i]=down(x);
            if(check(temp)){
                if(!vis[temp]){
                    vis[temp]=1;
                    lev[temp]=lev[u]+1;
                    q.push(temp);
                }
            }
        }
    }
    return -1;

}
int main()
{
    //input;
    int t;
    si(t);
    while(t--){//puts("");
      vis.clear();
      lev.clear();
      string a,b;
      cin >>a>>b;
      si(n);
      for(int i=0;i<n;i++){
          cin >> w[i].a >> w[i].b >> w[i].c;
      }
   // cout << check(b)<<endl;
      caseNo;
      int ans=bfs(a,b);
      pf("%d\n",ans);
    }
    return 0;
}







