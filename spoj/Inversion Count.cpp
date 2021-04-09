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

#define MX 200007

int a[MX],tree[MX],temp[MX];

void update(int idx,int val,int n)
{
    while(idx<=n){
        tree[idx]+=val;
        idx+= (idx&-idx);
    }
}
ll query(int idx)
{
    ll sum=0;
    while(idx>0){
        sum+=tree[idx];
        idx-= (idx&-idx);
    }
    return sum;
}
int main()
{
    int t;
    si(t);
    puts("");
    while(t--){
      mem(a,0);
      mem(tree,0);
      mem(temp,0);
      int n;
      si(n);
      for(int i=0;i<n;i++)si(a[i]),temp[i]=a[i];
      puts("");
      sort(temp,temp+n);
      map<int,int>m;
      for(int i=0;i<n;i++){
          m[temp[i]]=i+1;
      }
      for(int i=0;i<n;i++)a[i]=m[a[i]];
      ll ans=0;
      for(int i=n-1;i>=0;i--){
          ans+= query(a[i]-1);
          update(a[i],1,n);
      }
      pf("%lld\n",ans);

    }
    return 0;
}









