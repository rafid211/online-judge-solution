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

#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/__gcd(a,b)))
#define MX 10000002
ll p[MX];
//vi prime;
ll a[MX];
void sieve()
{
    for(int i=2;i<MX;i++){
        if(!p[i]){
            p[i]=i;
            for(int j=i+i;j<MX;j+=i){
                if(!p[j])p[j]=i;
            }
            a[i]=a[i-1]+p[i];
        }
        else{
            a[i]=a[i-1]+p[i];
        }
    }
    //for(int i=0;i<10;i++)outt(i,a[i]);
}

int main()
{
    sieve();
    //fast_io
    int t,cnt=0;
    si(t);
    while(t--){
        int n;
        si(n);
        printf("%lld\n",a[n]);
    }


    return 0;
}







