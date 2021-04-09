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
#define MX 1000001


int main()
{
	//input;
	//output;
	int t;
	si(t);
	while(t--){
		//v.clear();
		int x,y,f;
		sii(x,y);
		si(f);

		vector<int>v,vv;
		for(int i=0;i<f;i++){
			int a,b;
			sii(a,b);
			v.pb(a);
			vv.pb(b);
		}
		//out("-------------");
		sort(ALL(v));
		sort(ALL(vv));

		int mid = f/2;

		if(f&1){
			x=v[mid];
			y=vv[mid];
			pf("(Street: %d, Avenue: %d)\n",x,y);
		}
		else{
			mid--;
			x=v[mid];
			y=vv[mid];
			pf("(Street: %d, Avenue: %d)\n",x,y);
		}
		//out(val);outt(p.x,p.y);
		//pf("(Street: %d, Avenue: %d)\n",p.x,p.y);
	}

	return 0;

}
/*
7 7 11
1 2
1 7
2 2
2 3
2 5
3 4
4 2
4 5
4 6
5 3
6 5
*/
