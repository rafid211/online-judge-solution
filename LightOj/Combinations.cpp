#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000003;
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
ll d[MX+2];
void cal()
{
    d[0]=d[1]=1;
    for(int i=2;i<=MX;i++){d[i]=i;
        d[i]=((d[i]%MOD)*(d[i-1]%MOD))%MOD;
    }
}

// nck= n!/k!(n-k)! 
// a = k!(n-k)!
// n! / a
// n! * a^-1

//inverse modulo a^(m-2) % m = a^-1
// m prime
ll bigmod(ll n,ll p)
{
    if(p==0)return 1;
    ll x = bigmod(n,p/2);
    x = ((x%MOD)*(x%MOD))%MOD;
    if(p%2){x = (x*n)%MOD;}
    return x;
}
int main()
{
    cal();
    int t,cnt=0;
    si(t);
    while(t--){
        int n,k;
        sii(n,k);
        ll x = d[n];
        ll y = (d[k]*d[n-k])%MOD;
        ll ans = (x*bigmod(y,MOD-2))%MOD;
        printf("Case %d: %lld\n",++cnt,ans);
    }
    return 0;
}







