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


#define MX 10005


#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

unsigned base[MAX/64], segment[RNG/64], primes[LEN];

bool p[MX];

void ToBinary(int n)
{
    if(!n)return;
    pf(n%2);
    ToBinary(n/2);
}


ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}

void sieve() {
  ll sq = sqrt(MX);
  for (int i = 3; i <= sq; i += 2) {
    if (!p[i]) {
      for (int j = i * i; j < MX; j += i + i) {
        p[j] = 1;
      }
    }
  }
}





//segment sieve
int segmented_sieve(int a, int b)
{
    unsigned i,j,k,p,cnt=(a<=2&&2<=b)?1:0;
    if(b<2) return 0;
    if(a<3)a=3;
    if(a%2==0)a++;
    mem(segment,0);
    for(i=0;primes[i]*primes[i]<=b;i++){
        p = primes[i]*((a+primes[i]-1)/primes[i]);
        if(p%2==0)p+=primes[i];
        for(j=p,k=primes[i]<<1; j<=b; j+=k){ //k=prime[i]*2
            if(j!=primes[i]){
                setC(segment,(j-a));
            }
        }
    }
    for(i=0; i<=b-a;i+=2){
        if(!chkC(segment, i))//cout <<i<<" "<<a+i<<endl;
            cnt++;
    }
    return cnt;
}

//bigmod
ll bigmod(ll n, ll p, ll m) {
  if (p == 0) return 1;
  ll x = bigmod(n, p / 2, m);
  x = ((x % m) * (x % m)) % m;
  if (p & 1) x = (x * n) % m;
  return x;
}
//extended gcd
ll egcd(ll a, ll b, ll * x, ll * y) {
  if (a == 0) {* x = 0, * y = 1;
    return b;
  }
  ll x1, y1;
  ll g = egcd(b % a, a, & x1, & y1);* x = y1 - (b / a) * x1;* y = x1;
  return g;
}


//tri
const int WORD=26;
typedef struct node
{
    bool endmark;
    node* next[WORD];
    node()
    {
        endmark=0;
        for(int i=0;i<WORD;i++)next[i]=NULL;
    }
}*nodeptr;
//nodeptr root=new node();


void update(string s,int n,nodeptr root)
{
    nodeptr curr = root;
    for(int i=0;i<n;i++){
        int id = s[i]-'a';
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
        }
        curr = curr->next[id];
    }
    curr->endmark = 1;
}


bool search_word(string s,int n,nodeptr root)
{
    nodeptr curr = root;
    for(int i=0;i<n;i++){
        int id = s[i]-'a';
        if(curr->next[id]==NULL){
            return false;
        }
        curr = curr->next[id];
    }
    return curr->endmark;
}

//segment tree
int a[MX],tree[MX<<2];
void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=a[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node+1,s,mid);
    build(2*node+2,mid+1,e);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
void update(int node,int s,int e,int index)
{
    if(index<s || index>e)return;
    if(s==e){
        tree[node]=0;
        a[index]=0;
        return;
    }
    int mid=(s+e)/2;
    update(2*node+1,s,mid,index);
    update(2*node+2,mid+1,e,index);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
int query(int node,int s,int e,int l,int r)
{
    if(r<s||e<l)return 0; //out of range
    if(l<=s&&e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    ll p1=query(2*node+1,s,mid,l,r);
    ll p2=query(2*node+2,mid+1,e,l,r);
    return p1+p2;
}

//segment tree with lazy prop
struct segment
{
    ll sum;
    ll lazy;
}tree[MAX<<2];
//propagate lazy
void prop(int node,int s,int e)
{
    tree[node].sum+=(e-s+1)*tree[node].lazy;
    if(s<e){
        tree[2*node+1].lazy+=tree[node].lazy; //update lazy
        tree[2*node+2].lazy+=tree[node].lazy;
    }
    tree[node].lazy=0;
}
void update(int node,int s,int e,int x,int y,int val)
{
    prop(node,s,e);
    if(y<s||x>e)return; //out of range

    if(x<=s&&e<=y){
        tree[node].lazy+=val;
        return;
    }
    int mid=(s+e)/2;
    update(2*node+1,s,mid,x,y,val);
    update(2*node+2,mid+1,e,x,y,val);
    prop(2*node+1,s,mid); //propagate
    prop(2*node+2,mid+1,e);
    tree[node].sum=tree[2*node+1].sum+tree[2*node+2].sum;
}
ll query(int node,int s,int e,int x,int y)
{
    prop(node,s,e); //propagate
    if(y<s||x>e)return 0;
    if(x<=s&&e<=y){
        return tree[node].sum;
    }
    int mid=(s+e)/2;
    ll p1=query(2*node+1,s,mid,x,y);
    ll p2=query(2*node+2,mid+1,e,x,y);
    return p1+p2;
}

