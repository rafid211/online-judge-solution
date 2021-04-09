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
#define MX 10005
int dx[]={+1,-1,+0,+0};
int dy[]={+0,+0,+1,-1};

int m,n;
string graph[30];
int x,y;
char land,water;
bool vis[30][30];

bool valid(int x,int y)
{
	return (x>=0 && x<n && y>=0 && y<m);
}
int c=0;
void dfs(pii s)
{
	
	vis[s.x][s.y]=1;

	if(s.y==m-1){
		if(graph[s.x][0]==land && !vis[s.x][0]){
			pii d = {s.x,0};
			dfs(d);c++;
		}
	}
	if(s.y==0){
		if(graph[s.x][m-1]==land && !vis[s.x][m-1]){
			pii d = {s.x,m-1};
			dfs(d);c++;
		}
	}
	for(int i=0;i<4;i++){
		int nx=s.x+dx[i];
		int ny=s.y+dy[i];
		if(!vis[nx][ny] && valid(nx,ny) && graph[nx][ny]==land){
			pii d = {nx,ny};
			dfs(d);c++;
		}
	}
}
int main()
{
	//input;
	while(sii(n,m)!=EOF){

		mem(vis,0);
		for(int i=0;i<n;i++)cin >>graph[i];

		sii(x,y);

		land= graph[x][y];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(graph[i][j]!=land){
					water=graph[i][j];
					break;
				}
			}
		}
		//outt(land,water);
		dfs({x,y});
		//outt('!',c);
		c=0;
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(!vis[i][j] && graph[i][j]==land){
					pii s = {i,j};
					dfs(s);
					//out(c);
					ans = max(ans,c+1);
					c=0;
					
				}
			}
		}
		pf("%d\n",ans);
	}
}

/*

5 5
wwwww
wwllw
wwwww
wllww
wwwww
1 3

*/