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
#define MX 10005
vi prime;
bool p[MX];
int d[MX];
int solve[MX];
int id=1;
void sieve()
{
    int x=120; //upto sqrt of MX
    int sq=sqrt(x);
    //int sz=sqrt(sq);
    for(int i=3;i<=sq;i+=2){
        if(!p[i]){
            for(int j=i*i;j<x;j+=i+i){
                p[j]=1;
            }
        }
    }
    prime.pb(2);
    for(int i=3;i<x;i+=2){
        if(!p[i])prime.pb(i);
    }
}
void factor(int n)
{
    int num=n,c=0;
    for(int i=0;prime[i]*prime[i]<=num;i++){
        if(n%prime[i]==0){
           while(n%prime[i]==0){
                n/=prime[i];
                c++;
           }
        }
        if(c){
            d[prime[i]]=max(d[prime[i]],c);
            c=0;
        }
    }
    if(n>1){
        d[n]=max(1,d[n]);
    }
}
void cal(int n)
{
    int carry=0,sum=0;
    for(int i=0;i<id;i++)
    {
         sum=solve[i]+carry;
         solve[i]=sum%10;
         carry=sum/10;
    }
    while(carry)
    {
        solve[id++]=carry%10;
        carry/=10;
    }

}
int main()
{
    sieve();
    int t,cnt=0;
    si(t);
    while(t--){
        mem(solve,0);
        mem(d,0);
        solve[0]=1;
        id=1;
        int n;
        si(n);
        for(int i=0;i<n;i++){
            int a;si(a);
            factor(a);
        }
        for(int i=1;i<MX;i++){
            if(d[i]){
               d[i] = pow(i,d[i]);
               //out(d[i]);
               for(int k=0;k<id;k++)solve[k]*=d[i];
               cal(d[i]);
            }
        }
        printf("Case %d: ",++cnt);
        for(int i=id-1;i>=0;i--)printf("%d",solve[i]);
        cout <<nl;
    }

    return 0;
}






