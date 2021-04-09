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

//#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/__gcd(a,b)))
#define MX 200005
ll phi[MX];
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void ETF()
{
    for(int i=1;i<MX;i++)phi[i]=i;

    for(int p=2;p<MX;p++){
        if(phi[p]==p){
            phi[p]=p-1;
            for(int i=2*p;i<MX;i+=p){
                phi[i]=(phi[i]/p)*(p-1);
            }
        }
    }
    phi[1]=2;
    for(int i=2;i<MX;i++){
        phi[i]+=phi[i-1];
    }
    //for(int i=1;i<10;i++)outt(i,phi[i]);
}
int main()
{
   // fast_io
    ETF();
    ll n;
    while(sl(n)&&n!=0){
       int x = upper_bound(phi,phi+MX,n)-phi;
       if(phi[x-1]==n)x--;
       if(n==1){cout <<0<<"/"<<1<<endl;}
       else if(n==2){cout <<1<<"/"<<1<<endl;}
       else{
         ll c = phi[x-1],a,b;
         for(ll i=1;i<=x;i++){
            if(gcd(i,x)==1)c++;
            if(c==n){a=i,b=x;break;}
         }
         cout <<a<<"/"<<b<<endl;
       }
    }


    return 0;
}








