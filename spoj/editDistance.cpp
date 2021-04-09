#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
using ll = long long;
using ull =  unsigned long long;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define pf printf
#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define nl '\n'
#define x first
#define y second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define uniq(a) a.erase(unique(ALL(a), a.end())
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(x,v) memset(x,v,sizeof(x))
#define MX 2007
string a,b;
int dp[MX][MX];
int editDis(int i,int j)
{
	if(i==0)return j;
	if(j==0)return i;

	if(dp[i][j]!=-1)return dp[i][j];

	if(a[i-1]==b[j-1]){
		return dp[i][j] = editDis(i-1,j-1);
	}
	int x = editDis(i,j-1);
	int y = editDis(i-1,j);
	int z = editDis(i-1,j-1);
	return dp[i][j]=  min(min(x,y),z)+1;
}

int main()
{
	int t;
	si(t);
	while(t--){
		mem(dp,-1);
		cin >>a>>b;
		int x = editDis(a.size(),b.size());
		//out(x);
		cout << x<<endl;

	}
	

	return 0;
}

