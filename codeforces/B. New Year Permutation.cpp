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

int n;
int p[305];
string grid[305];

vi mat[305];
bool vis[305];
set<int>pos,val;
void dfs(int s)
{
    vis[s]=1;
	pos.insert(s);
	val.insert(p[s]);
	int len=mat[s].size();
	for(int i=0;i<len;i++){
		int x=mat[s][i];
		if(!vis[x]){
			dfs(x);
		}
	}

}
int main()
{
	cin >>n;
	for(int i=1;i<=n;i++)cin >>p[i];

	string s;
	for(int i=0;i<n;i++){
		cin >>grid[i];

	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grid[i][j]=='1'){
				mat[i+1].pb(j+1);
				mat[j+1].pb(i+1);
			}
		}
	}
	for(int i=1;i<=n;i++){
		pos.clear();
		val.clear();
		if(!vis[i]){
			dfs(i);
			auto v=val.begin();
			for(auto x:pos){
				p[x]= *v;
				v++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout <<p[i]<<" ";
	}cout <<endl;
	

	return 0;
}