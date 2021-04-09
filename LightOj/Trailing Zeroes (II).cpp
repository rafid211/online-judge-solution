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
#define MX 10005
ll f(int n,int x)
{
    ll c=0;
    for(ll i=x;i<=n;i*=x){
        c+= (n/i);
    }
    return c;
}
ll f1(ll n,ll x)
{
    ll c=0;
    while(n%x==0){
        n/=x;c++;
    }
    return c;
}
int main()
{
    //fast_io
    int t,cnt=0;
    si(t);
    while(t--){
        int n,r,p,q;
        cin >>n>>r>>p>>q;
        ll x1 = f(n,2)-f(r,2)-f(n-r,2);
        ll x2 = f(n,5)-f(r,5)-f(n-r,5);
        x1 += q*f1(p,2);
        x2 += q*f1(p,5);

        ll ans = min(x1,x2);
        cout <<"Case "<<++cnt<<": "<<ans<<endl;
    }

    return 0;
}







