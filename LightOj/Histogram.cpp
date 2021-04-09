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

int fx4[]={1,-1,0,0};
int fy4[]={0,0,1,-1};

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 30007

int a[MX];
int n;
pii tree[4*MX];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node]={a[s],s};
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}

pii query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l){
        return {INT_MAX,INT_MAX};
    }
    if(l<=s&&e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    pii p1=query(2*node,s,mid,l,r);
    pii p2=query(2*node+1,mid+1,e,l,r);
    return min(p1,p2);
}

int f(int s,int e)
{
    if(s>e)return 0;
    //if(s==e)return a[s];
    pii idx=query(1,1,n,s,e);
    int x=idx.F*((e-s)+1);
    int y=max(f(s,idx.S-1),f(idx.S+1,e));
    return max(x,y);
}
int main()
{
    int t;
    si(t);
    while(t--){

      si(n);
      for(int i=1;i<=n;i++)si(a[i]);
      build(1,1,n);
      caseNo;
      pf("%d\n",f(1,n));
    }
    return 0;
}






