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

ll dp[5007];
int main()
{
	fast_io
	string s;
	while(cin >>s){
		if(s=="0")break;
		for(int i=0;i<5007;i++)dp[i]=0;
		dp[0]=1;
		dp[1]=1;
		s.insert(0,"#");
		for(int i=2;i<s.size();i++){
			if(s[i]!='0'){
				dp[i]=dp[i-1];

			}
			int x = s[i-1]-'0';
			int y = s[i]-'0';
			int v = (x*10)+y;
			if(v>=10&&v<=26){
				dp[i]+=dp[i-2];
			}
			//cout << i<<" "<<dp[i]<<endl;
		}
		cout << dp[s.size()-1]<<endl;
	}
    
    return 0;
}






