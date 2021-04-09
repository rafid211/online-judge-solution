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
#define sii(x,y) scanf("%d %d",&x,&y)
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
#define MX 1000000
const double g = 0.5772156649;
double a[MX];
void h()
{
    a[1]=1.0;
    for(int i=2;i<=MX;i++){
        a[i]=a[i-1]+(1.0/(double)i);
    }
}
int main()
{
    h();
    //fast_io
    int t,cnt=0;
    si(t);
    while(t--){
       int n;
       si(n);
       double ans;
       if(n<=MX){
          ans=a[n];
          printf("Case %d: %0.9f\n",++cnt,ans);
       }
       else{
         // ln(n)+gamma+(1/2n)
          ans = log(n)+g+(1.0/(2.0*(double)n));
          printf("Case %d: %0.9f\n",++cnt,ans);
       }

    }


    return 0;
}







