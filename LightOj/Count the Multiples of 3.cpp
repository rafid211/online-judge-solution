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

#define caseNo pf("Case %d:\n",++CASE)
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

int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};

//int fx[8]={0,0,1,-1,-1,+1,-1,1};
//int fy[8]={-1,1,0,0,1,1,-1,-1};

#define MX 1000007
struct segment
{
    int zero,one,two,lazy;
 
}tree[MX<<2];
 
int d[3];
void build(int node,int s,int e)
{
 
    if(s==e){
        tree[node].zero=1;
        return;
    }
    int mid=(s+e)/2;
    build(2*node+1,s,mid);
    build(2*node+2,mid+1,e);
    tree[node].zero=tree[2*node+1].zero+tree[2*node+2].zero;
}
void prop(int node,int s,int e)
{
    int x=tree[node].lazy;
 
    d[0]=tree[node].zero;
    d[1]=tree[node].one;
    d[2]=tree[node].two;
    tree[node].zero=d[(0+x)%3]; //zero=one
    tree[node].one=d[(1+x)%3]; //one=two
    tree[node].two=d[(2+x)%3]; //two=zero
 
    if(s<e){
        tree[2*node+1].lazy+=x;
        tree[2*node+2].lazy+=x;
    }
    tree[node].lazy=0;
}
void update(int node,int s,int e,int x,int y)
{
    prop(node,s,e); //update node
    if(y<s||x>e)return; //out of range
 
    if(x<=s&&e<=y){ //within range
       tree[node].lazy=1;
       prop(node,s,e);
       return;
    }
    int mid=(s+e)/2;
    update(2*node+1,s,mid,x,y);
    update(2*node+2,mid+1,e,x,y);
 
    tree[node].zero=tree[2*node+1].zero+tree[2*node+2].zero;
    tree[node].one=tree[2*node+1].one+tree[2*node+2].one;
    tree[node].two=tree[2*node+1].two+tree[2*node+2].two;
}
int query(int node,int s,int e,int x,int y)
{
    prop(node,s,e);
    if(y<s||x>e)return 0; //out of range
 
    if(x<=s&&e<=y){ //within range
       return tree[node].zero;
    }
    int mid=(s+e)/2;
    int p1=query(2*node+1,s,mid,x,y);
    int p2=query(2*node+2,mid+1,e,x,y);
    return p1+p2;
}
 
void clearALL()
{
    for(int i=0;i<(MX<<2);i++){
        tree[i].zero=0;
        tree[i].one=0;
        tree[i].two=0;
        tree[i].lazy=0;
    }
}
int main()
{
 
    int t,cnt=0;
    si(t);
    while(t--){
        clearALL();
        int n,q;
        sii(n,q);
        build(0,0,n-1);
       caseNo;
        while(q--)
        {
            int x,i,j;
            scanf("%d %d %d",&x,&i,&j);
            if(!x)update(0,0,n-1,i,j);
            else {
                int ans=query(0,0,n-1,i,j);
                printf("%d\n",ans);
            }
        }
    }
    return 0;
}