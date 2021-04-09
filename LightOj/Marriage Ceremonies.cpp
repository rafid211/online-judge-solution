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
inline int Set(int N,int pos){return N=N | (1<<pos);}
inline int reset(int N,int pos){return N= N & ~(1<<pos);}
inline bool check(int N,int pos){return (bool)(N & (1<<pos));}
int n;
int dp[17][1<<16+2];
int a[17][17];

int solve(int pos,int mask)
{
	if(pos>=n)return 0;
	if(dp[pos][mask]!=-1)return dp[pos][mask];
	int ans=0;
	for(int i=0;i<n;i++){
		if(!check(mask,i)){
			int ret=a[pos][i]+solve(pos+1,Set(mask,i));
			ans=max(ans,ret);
		}
	}
	return dp[pos][mask]=ans;
}
void testCase()
{
	si(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			si(a[i][j]);
		}
	}

	int ans=solve(0,0);
	pf("%d\n",ans);
}
int main()
{
	#ifndef TEST
		input;
		output;
	#endif
	int t;
	cin >>t;
	int cnt=0;
	while(t--){
		mem(dp,-1);
		pf("Case %d: ",++cnt);
		testCase();
	}
	
	return 0;
}