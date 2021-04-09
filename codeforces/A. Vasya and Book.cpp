#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
const int INF = 0x7f7f7f7f;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef map<int,int>mii;
typedef map<ll,ll>mll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define caseNo(x) pf("Case %d: ",++x)
#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)

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


#define MX 10005

int main()
{
    int t,cnt=0;
    si(t);
    while(t--){
      int n,x,y,d,a[3];
      cin >>n>>x>>y>>d;
      int dif=abs(y-x);
      a[0]=-1;
      int ans=INT_MAX;
      if(dif%d==0){
         a[0]=dif/d;
      }
      a[1]=-1,a[2]=-1;
      if((y-1)%d==0){
          a[1]=(x-1)/d;if((x-1)%d)a[1]++;
          a[1]+=(y-1)/d;
      }
      if((n-y)%d==0){
          a[2]=(n-x)/d;if((n-x)%d)a[2]++;
          a[2]+=(n-y)/d;
      }
      for(int i=0;i<3;i++){
         if(a[i]!=-1)ans=min(ans,a[i]);
      }
      if(ans==INT_MAX)ans=-1;
      cout <<ans<<endl;
    }
    return 0;
}








