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
typedef map<int,int>mii;
typedef map<ll,ll>mll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define caseNo(x) pf("Case %d: ",++x)
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

#define MX 230050
//vi prime;
//bool p[MX];
//void sieve(){ll sq=sqrt(MX);for(int i=3;i<=sq;i+=2){if(!p[i]){for(int j=i*i;j<MX;j+=i+i){p[j]=1;}}}}
//ll bigmod(ll n,ll p,ll m){if(p==0)return 1;ll x=bigmod(n,p/2,m);x=((x%m)*(x%m))%m;if(p&1)x=(x*n)%m;return x;}
//ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//ll egcd(ll a, ll b, ll *x, ll *y){if(a==0){*x=0,*y=1;return b;}ll x1,y1;ll g=egcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return g;}
//ll egcd(ll a, ll b, ll *x, ll *y){if(b==0){*x=1;*y=0;return a;}ll x1,y1;ll temp=egcd(b,a%b,&x1,&y1);*x=y1;*y=x1-y1*(a/b);return temp;}

struct node
{
    int l,r,val,pos,qpos;
    bool type;

}a[MX];
int tree[MX<<2];

void update(int node,int s,int e,int index)
{
    if(index<s || index>e)return;
    if(s==e){
        tree[node]=1;
        return;
    }
    int mid=(s+e)>>1;
    update(2*node+1,s,mid,index);
    update(2*node+2,mid+1,e,index);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
int query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l)return 0; //out of range
    if(l<=s&&e<=r){//outt(s,e);
        return tree[node];
    }
    int mid=(s+e)>>1;
    ll p1=query(2*node+1,s,mid,l,r);
    ll p2=query(2*node+2,mid+1,e,l,r);
    return p1+p2;
}

bool cmp(node x,node y)
{
    if(x.val==y.val)return x.type<y.type;
    return x.val>y.val;
}

int main()
{
    int n;
    si(n);
    for(int i=0;i<n;i++){
        int x;si(x);
        a[i].pos=i;
        a[i].val=x;
        a[i].type=1;
    }
    int q;
    si(q);
    for(int i=n,j=0;i<q+n;i++,j++){
        int l,r,k;
        siii(l,r,k);
        a[i].pos=i;
        a[i].qpos=j;
        a[i].val=k;
        a[i].l=l;
        a[i].r=r;
        a[i].type=0;
    }
    sort(a,a+n+q,cmp);
    pii ans[q];
    for(int i=0,j=0;i<q+n;i++){
       // outt(a[i].val,a[i].pos);
        if(a[i].type==1){
            update(0,0,n-1,a[i].pos);
        }
        else{
            int x = query(0,0,n-1,a[i].l-1,a[i].r-1);
            ans[j].F=a[i].qpos;
            ans[j].S=x;//out(x);
            j++;
        }
    }
    sort(ans,ans+q);
    for(int i=0;i<q;i++)pf("%d\n",ans[i].S);
    return 0;
}







