#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
const int INF = 0x7f7f7f7f;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef map<int,int>mi;
typedef map<ll,ll>ml;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

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

#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

#define MX 10000007
vi prime;
bool p[MX];
void sieve(){ll sq=sqrt(MX);for(int i=3;i<=sq;i+=2){if(!p[i]){for(int j=i*i;j<MX;j+=i+i){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//vi pow2;
void fil()
{
    prime.pb(2);//pow2.pb(4);
    for(int i=3;i<MX;i+=2){
        if(!p[i]){
            prime.pb(i);
            //pow2.pb(2+i);
        }
    }

}
//void even(int x,int y)
//{
//    int v[4];
//    bool ok1=0,ok2=0;
//    for(int i=1;i<prime.size() && prime[i]<=x;i++){
//        int p = x-prime[i];
//        if(binary_search(ALL(prime),p)){
//            v[0]=prime[i];v[1]=p;ok1=1;
//            break;
//        }
//
//    }
//    for(int i=1;i<prime.size() && prime[i]<=y;i++){
//        int p = y-prime[i];
//        if(binary_search(ALL(prime),p)){
//            v[2]=prime[i];v[3]=p;ok2=1;
//            break;
//        }
//
//    }
//    if(ok1&&ok2){
//        for(int i=0;i<4;i++){
//            if(i==0)pf("%d",v[i]);
//            else pf(" %d",v[i]);
//        }
//    }
//    else{
//        pf("Impossible");
//    }
//
//    pf("\n");
//}
//void odd(int x,int y)
//{
//    int v[4];
//    bool ok1=0,ok2=0;
//     for(int i=1;i<prime.size() && prime[i]<=x;i++){
//        int p = x-prime[i];
//        if(binary_search(ALL(prime),p)){
//            v[0]=prime[i];v[1]=p;ok1=1;
//            break;
//        }
//
//    }
//    if(binary_search(ALL(pow2),y)){
//        v[2]=2;v[3]=y-2;ok2=1;
//
//    }
//    else if()
//    if(ok1&&ok2){
//        for(int i=0;i<4;i++){
//            if(i==0)pf("%d",v[i]);
//            else pf(" %d",v[i]);
//        }
//    }
//    else{
//        pf("Impossible");
//    }
//
//    pf("\n");
//}

int main()
{

    sieve();fil();
    int n,a,b;
    while(~si(n)){
        if(n<8)pf("Impossible.");
        else if(n&1){
            pf("%d %d ",2,3);
            for(int i=0;i<prime.size()&&prime[i]<=n-5;i++){
                int x = n-5-prime[i];
                if(binary_search(ALL(prime),x)){
                    pf("%d %d",x,prime[i]);
                    break;
                }
            }
        }
        else{
            pf("%d %d ",2,2);
            for(int i=0;i<prime.size()&&prime[i]<=n-4;i++){
                int x = n-4-prime[i];
                if(binary_search(ALL(prime),x)){
                    pf("%d %d",x,prime[i]);
                    break;
                }
            }
        }
        pf("\n");
    }
    return 0;
}








