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
//EWNS
// int dx[]={+1,-1,+0,+0};
// int dy[]={+0,+0,+1,-1};
string a,b;
int as,bs;
string dp[101][101];
string lcs(int n,int m)
{
	if(n==as|| m==bs)return "";
	if(dp[n][m]!="#")return  dp[n][m];
	if(a[n]==b[m]){
		string temp="";
		temp.pb(a[n]);
		return dp[n][m]=temp+lcs(n+1,m+1);
	}
	else{
		string x=lcs(n+1,m);
		string y=lcs(n,m+1);
		if(x.size()==y.size())dp[n][m]=min(x,y);
		else if(x.size()>y.size())dp[n][m]=x;
		else dp[n][m]=y;
	}
	return dp[n][m];
}

void clr()
{
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			dp[i][j]="#";
		}
	}
}
int main()
{
	#ifdef TEST
		input;
	    output;
	#endif
	
	int t;
	int cnt=0;
	si(t);
	while(t--){
		clr();
		cin >>a>>b;
		as=a.size();
		bs=b.size();		
		pf("Case %d: ",++cnt);
		string ans=lcs(0,0);
		if(ans.size()==0)ans=":(";	
		cout << ans<<endl;
		
	}
	
	return 0;
}