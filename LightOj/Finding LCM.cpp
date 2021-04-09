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

#define nl '\n'
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/__gcd(a,b)))
#define MX 10005

int main()
{
    //fast_io
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
       ll a,b,L;
       cin >>a>>b>>L;
       set<ll>div;
       set<ll>::iterator it;
       ll sq=sqrt(L)+1;
       for(ll i=1;i<=sq;i++){
           if(L%i==0){
              if((L/i)==i)div.insert(i);
              else{div.insert(L/i);div.insert(i);}
           }
       }
       ll x = lcm(a,b);
       ll ans=INT_MAX;
       for(it=div.begin();it!=div.end();it++){
           if(lcm(x,*it)==L){
              ans=min(ans,*it);
           }
       }
       //cout <<ans<<endl;
       printf("Case %d: ",++cnt);
       if(ans==INT_MAX){
          printf("impossible\n");
          continue;
       }
       printf("%lld\n",ans);
    }
    return 0;
}








