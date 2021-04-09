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
#define MX 100007
bool p[MX];
vi prime;
void sieve()
{
    int sq=sqrt(MX);
    for(int i=3;i<=sq;i+=2){
        if(!p[i]){
            for(int j=i*i;j<MX;j+=i+i){
                p[j]=1;
            }
        }
    }
    prime.pb(2);
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime.pb(i);
    }
}
int fact(int n)
{
    int sp=prime.size();
    int x=n,c=0;
    for(int i=0;i<sp&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
            }
            c++;
        }
    }
    if(n!=1){
        c++;
    }
    return ((c>=3)?x:-1);
}
int main()
{
    sieve();
    int t,cnt=0;
    si(t);
    while(t--){
        int n;
        si(n);
        int c=0;
        int i=26;
        while(1){
            if(fact(i)!=-1){c++;}
            if(c==n){printf("%d\n",i);break;}
            i++;
        }
    }
    return 0;
}







