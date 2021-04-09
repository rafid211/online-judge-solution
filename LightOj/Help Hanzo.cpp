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

#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032
unsigned base[MAX/64],segment[RNG/64],prime[LEN];

void sieve()
{
    unsigned i, j, k;
    for(i=3;i<LMT;i+=2){
        if(!chkC(base, i)){
            for(j=i*i,k=i<<1;j<MAX;j+=k){
                setC(base, j);
            }
        }
    }
    j=0;
    for(i=3;i<MAX; i+=2){
        if(!chkC(base,i))prime[j++]=i;
    }
}
int p(int a, int b)
{
    unsigned i,j,k,p,cnt=(a<=2&&2<=b)?1:0;
    if(b<2) return 0;
    if(a<3) a=3;
    if(a%2==0)a++;
    mem(segment,0);
    for(i=0;prime[i]*prime[i]<=b;i++){
        p=prime[i]*((a+prime[i]-1)/prime[i]);
        if(p%2==0)p+=prime[i];
        for(j=p,k=prime[i]<<1;j<=b;j+=k){ //k=prime[i]*2
            if(j!=prime[i]){
                setC(segment,(j-a));
            }
        }
    }
    for(i=0;i<=b-a;i+=2){
        if(!chkC(segment,i))//cout <<i<<" "<<a+i<<endl;
            cnt++;
    }
    return cnt;
}
int main()
{
    sieve();
   // fast_io
    int t,cnt=0;
    si(t);
    while(t--){
       int a,b;
       sii(a,b);
       printf("Case %d: %d\n",++cnt,p(a,b));
    }


    return 0;
}







