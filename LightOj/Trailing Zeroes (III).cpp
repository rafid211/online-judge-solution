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
#define MX 100000000000000

ll noz(ll x)
{
    ll c=0,k=5;
    for(ll i=k;i<=x;i*=k){
        c+= (x/i);
    }
    return c;
}
int main()
{
    //fast_io
    int t,cnt=0;
    si(t);
    while(t--){
        ll n;
        cin >>n;
        ll f=1,l=MX;
        ll mid;
        bool ok=0;
        while(f<l){
            mid=(f+l)/2;
            ll zero = noz(mid);
            if(zero==n){l=mid;}
            if(zero<n){f=mid+1;}
            else {l=mid;}
        }
        if(noz(f)==n)ok=1;
        if(ok)printf("Case %d: %lld\n",++cnt,f);
        else printf("Case %d: impossible\n",++cnt);
    }
    return 0;
}







