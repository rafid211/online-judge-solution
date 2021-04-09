#include <bits/stdc++.h>
using namespace std;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define caseNo(x) pf("Case %d: ",++x)
#define pf printf
#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)

#define MX 1007
int prime[1007];
bool p[MX];
int sz=0;
//void primes(){prime.pb(2);for(int i=3;i<MX;i+=2)if(!p[i])prime.pb(i);}
void sieve(){int sq=sqrt(MX);for(int i=3;i<=sq;i+=2){if(!p[i]){for(int j=i*i;j<MX;j+=i+i){p[j]=1;}}}}

void get()
{
    prime[sz++]=2;
    for(int i=3;i<MX;i+=2){
        if(!p[i])prime[sz++]=i;
    }
}
void nod(int n)
{
    int ans=1;
    int c=0;
    for(int i=0;i<sz&&prime[i]*prime[i]<=n;i++){c=0;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                c++;
            }
            ans*=(c+1);
        }
    }
    if(n>1)ans*=2;

    pf("%d\n",ans);
}
int main()
{
    fast_io
    sieve();get();
    int t,cnt=0;
    si(t);
    while(t--){
      int a,b;
      sii(a,b);
      int x=__gcd(a,b);
      nod(x);
    }
    return 0;
}








