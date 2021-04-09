#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
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
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

#define MX 10005
bool p[MX];
//void sieve(){ll sq=sqrt(MX);for(int i=3;i<=sq;i+=2){if(!p[i]){for(int j=i*i;j<MX;j+=i+i){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}

//string mon[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};

int year(int y1,int y2)
{
    int ans = (y2/4-y2/100+y2/400)-(y1/4-y1/100+y1/400);
    return ans;
}

int main()
{
    map<string,int>month;
    month["January"]=1;
    month["February"]=2;
    month["March"]=3;
    month["April"]=4;
    month["May"]=5;
    month["June"]=6;
    month["July"]=7;
    month["August"]=8;
    month["September"]=9;
    month["October"]=10;
    month["November"]=11;
    month["December"]=12;

    int t,cnt=0;
    si(t);
    while(t--){
      ll n;
      sl(n);
      string m1,m2;
      int d1,d2,y1,y2;
      cin >>m1;
      scanf("%d, %d",&d1,&y1);
      y1--;
      cin >>m2;
      scanf("%d, %d",&d2,&y2);
      if(month[m1]>2)y1++;
      if(month[m2]<2)y2--;
      else if(month[m2]==2 && d2<29)y2--;

      int ans=year(y1,y2);//out(ans);
      printf("Case %d: %d\n",++cnt,ans);
    }
    return 0;
}








