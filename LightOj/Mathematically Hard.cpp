#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
typedef unsigned long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

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

#define gcd(a,b) __gcd(a,b);
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define MX 5000005
ll phi[MX];
void func()
{
    for(int i=1;i<MX;i++)phi[i]=i;

    for(ll p=2;p<MX;p++){
        if(phi[p]==p){
            phi[p]=p-1;
            for(ll i=2*p;i<MX;i+=p){
                phi[i]=(phi[i]/p)*(p-1);
            }
        }
    }
    for(ll i=2;i<MX;i++){
        phi[i]*=phi[i];
        phi[i]=phi[i]+phi[i-1];
    }

}
int main()
{
    func();
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        ll ans=phi[b]-phi[a-1];
        printf("Case %d: %llu\n",++cnt,ans);
    }

    return 0;
}






