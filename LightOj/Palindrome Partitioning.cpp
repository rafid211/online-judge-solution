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

string s;
int n;
ll dp[1007];
bool isPalindrome(int i,int j)
{
	while(i<=j){
		if(s[i]!=s[j])return 0;
		i++;j--;
	}
	return 1;
}
ll solve(int pos)
{
	if(pos>=n)return 0;
	if(dp[pos]!=-1)return dp[pos];
	ll ans=1e18;
	for(int i=0;i<n;i++){
		if(pos<=i && isPalindrome(pos,i)){
			ans=min(ans,1+solve(i+1));
		}
	}
	return dp[pos]=ans;
}

int main()
{
	#ifndef TEST
		input;
		output;
	#endif
	int t;
	int cnt=0;
	si(t);
	while(t--){
		mem(dp,-1);
		cin >>s;
		n=s.size();
		int ans=solve(0);
		pf("Case %d: %lld\n",++cnt,ans);
		
		
	}
	
	return 0;
}