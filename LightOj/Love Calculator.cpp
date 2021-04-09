#include "bits/stdc++.h"
using namespace std;
const int MOD = 100000007;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
using ll = long long;
using ull =  unsigned long long;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)

#define pii pair<int,int>
#define nl '\n'
#define mp make_pair
#define x first
#define y second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define uniq(a) a.erase(unique(a.begin(), a.end()), a.end())
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<"# "<<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
inline int setBit(int N,int pos){return N=N | (1<<pos);}
inline int reset(int N,int pos){return N= N & ~(1<<pos);}
inline bool check(int N,int pos){return (bool)(N & (1<<pos));}

string a,b;
ll dp[105][40][40];
ll len,lena,lenb;
ll sol[40][40];
ll solve(ll take,ll n,ll m)
{
	if(n==lena && m==lenb){
		return (take==len);
	}
	if(take>len)return 0;
	if(n>lena||m>lenb)return 0;
	if(dp[take][n][m]!=-1)return dp[take][n][m];
	ll way=0,x=0,y=0;
	if(a[n]==b[m]){
		way = solve(take+1,n+1,m+1);
	}
	else{
		x = solve(take+1,n+1,m);
		y = solve(take+1,n,m+1);
		way = x+y;
	}
	return dp[take][n][m]=way;


}
ll lcs(ll n,ll m)
{
	if(!n || !m)return 0;
	if(sol[n][m]!=-1)return sol[n][m];
	if(a[n-1]==b[m-1])return sol[n][m]=1+lcs(n-1,m-1);
	else return sol[n][m]=max(lcs(n,m-1),lcs(n-1,m));
}
int main()
{
	#ifdef TEST
		input;
		output;
	#endif
	ll t;
	cin >>t;
	ll cnt=0;
	while(t--){
		mem(dp,-1);
		mem(sol,-1);
		//string a,b;
		cin >>a>>b;
		lena=a.size();
		lenb=b.size();
		len = lena+lenb-lcs(lena,lenb);
		pf("Case %lld: ",++cnt);
		pf("%lld ",len);
		ll ans = solve(0,0,0);
		pf("%lld\n",ans);
		
	}
	
	return 0;
}