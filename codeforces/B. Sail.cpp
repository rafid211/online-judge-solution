#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

#define x first
#define y second
#define pb push_back
#define MX 100007

int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};

int a[1005];

map<char,int>m;
int main()
{
	m['E']=0;
	m['W']=1;
	m['N']=2;
	m['S']=3;

	int t,sx,sy,ex,ey;
	cin >> t;
	cin >>sx>>sy;
	cin >>ex>>ey;

	string s;cin >>s;

	int x=sx,y=sy;
	int dis=abs(x-ex)+abs(y-ey);
	int ans;
	bool ok=0;
	for(int i=0;i<t;i++){
		
		int idx=m[s[i]];
		int v=abs(x+fx[idx]-ex)+abs(y+fy[idx]-ey);
		if(v<dis){
			x+=fx[idx];
			y+=fy[idx];
			dis=abs(x-ex)+abs(y-ey);
		}
		ans=i;
		if(x==ex&&y==ey){
			ok=1;
			break;
		}
		// cout << x<<" "<<y<<endl;
	}
	if(x==ex&&y==ey){
		ok=1;
	}
	if(ok)cout << ans+1<<endl;
	else cout <<-1<<endl;
	return 0;

}