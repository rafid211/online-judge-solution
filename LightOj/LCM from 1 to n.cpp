#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
typedef unsigned int uint;
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
#define MX 100000002
int p[MX/64];
uint prime[5761465];
uint cp[5761465];
int id=1;
void sieve()
{
    int sq = sqrt(MX);
    for(int i=3;i<=sq;i+=2){
        if(!chkC(p,i)){
            for(int j=i*i;j<MX;j+=i+i){
                setC(p,j);
            }
        }
    }
    prime[0]=2;
    for(int i=3;i<MX;i+=2){
        if(!chkC(p,i))prime[id++]=i;
    }
    cp[0]=2;
    for(int i=1;i<id;i++){
        cp[i]=cp[i-1]*prime[i];
    }
}
uint LCM(int n)
{
    uint ans=1,num;
	for(uint i=0;i<id&&prime[i]*prime[i]<=n;i++ ){num=n;
		num/=prime[i];uint c=0;
		while(num>=prime[i]) {
			num/=prime[i]; //calculate p^(a-1)<=n
            ans*=prime[i];
		}
	}
	uint x = upper_bound(prime,prime+id,n)-prime;
	return ans*cp[--x];

}
int main()
{
    sieve();
    int t,cnt=0;
    si(t);
    while(t--){
        int n;
        si(n);
        printf("Case %d: ",++cnt);
        cout <<LCM(n)<<endl;
    }


    return 0;
}
