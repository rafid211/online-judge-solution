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

#define MX 200005

ll a[MX],b[MX],temp[MX];

int main()
{
    int n,q;
    cin >>n>>q;
    for(int i=1;i<=n;i++)cin >>a[i];
    sort(a+1,a+n+1);

    //for(int i=1;i<=n;i++)out(a[i]);return 0;
    for(int i=0;i<q;i++){
        int l,r;cin >>l>>r;
        b[l]++;b[r+1]--;
    }
    ll x=0;
    for(int i=1;i<=n;i++){
        x+=b[i];
        temp[i]=x;
    }
    sort(temp+1,temp+n+1);

    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+= (a[i]*temp[i]);
    }
    cout <<ans<<endl;
    return 0;
}







