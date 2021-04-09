#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
using ll = long long;
using ull =  unsigned long long;
using uint =  unsigned int;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define pf pruintf
#define nl '\n'
#define x first
#define y second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define uniq(a) a.erase(unique(ALL(a), a.end())
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(x,v) memset(x,v,sizeof(x))
#define MX 10005

int dp[100000004];
int f(int n)
{
	if(n<12)return dp[n]=n;
	if(dp[n]!=-1)return dp[n];
	return dp[n]=f(n/2)+f(n/3)+f(n/4);

}
uint x=0;
void f2(int n)
{
	if(n<=100000002){
		x+=dp[n];
		return;
	}
	f2(n/2);
	f2(n/3);
	f2(n/4);
}
int main()
{
	fast_io
	mem(dp,-1);
	for(int i=0;i<=100000002;i++){
		if(dp[i]==-1)dp[i]=f(i);
	}
	int n;
	while(cin >>n){
		 if(n>100000002){
		 	f2(n);
		 	cout << x<<endl;
		 }
		 else cout <<dp[n]<<endl;
		 x=0;
	}

    
    return 0;
}






