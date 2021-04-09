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

#define MX 10005

int a[20];
bool vis[20];
int len=0;
void f(int n)
{
    len=0;
    while(n){
        int r=n%10;
        a[len++]=r;
        n/=10;
    }
    //reverse(a,a+len);
}
int ss(int n)
{
    int x=1;
    while(n)
    {
        int r=n%10;
        if(r!=0)x*=r;
        n/=10;
    }
    return x;
}
int main()
{
    int n;
    cin >>n;

    if(n<1000){
        int x=1;
        for(int i=n;i>=1;i--){
            x=max(x,ss(i));
        }
    cout << x<<endl;
    return 0;
    }
    f(n);
    int go=a[0];
    if(!a[0] || a[0]<8)a[0]=max(a[0],9);
    if(a[1]!=0 && a[0]>go)a[1]--;
    for(int i=1;i<len-1;i++){
        if(a[i]==0){
            a[i]=9;
            if(a[i+1]!=0)a[i+1]--;
        }
    }
    ll ans=1;
    for(int i=0;i<len;i++){out(a[i]);
        if(a[i]!=0)ans*=a[i];
    }
    cout <<ans<<endl;


    return 0;
}
