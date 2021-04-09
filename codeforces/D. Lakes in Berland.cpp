#include <bits/stdc++.h>
using namespace std;
int n,m,k;


int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};

string grid[55];
bool vis[55][55];
bool valid(int x,int y)
{
	return (x>=0&&x<n && y>=0&&y<m);
}

int lev[55][55];
int c=0;

bool share=0;
bool side(int x,int y)
{
	return((x==0&&y>=0&&y<m) ||
	   (y==0&&x>=0&&x<n) ||
	   (y==m-1&&x>=0&&x<n)||
	   (x==n-1&&y>=0&&y<m) );
}
void dfs(int x,int y)
{
	vis[x][y]=1;
	c++;
	if(side(x,y)){share=1;}
	for(int i=0;i<4;i++){
		int dx=x+fx[i];
		int dy=y+fy[i];
		if(valid(dx,dy)&&!vis[dx][dy]&&grid[dx][dy]=='.'){
			
			dfs(dx,dy);
		}
	}
}
void fill(int x,int y)
{
	vis[x][y]=1;
	grid[x][y]='*';
	for(int i=0;i<4;i++){
		int dx=x+fx[i];
		int dy=y+fy[i];
		if(valid(dx,dy)&&!vis[dx][dy]&&grid[dx][dy]=='.'){
			//grid[dx][dy]='*';
			fill(dx,dy);
		}
	}
}
void clr()
{
	for(int i=0;i<55;i++){
		for(int j=0;j<55;j++){
			vis[i][j]=0;
		}
	}
}
struct lake
{
	int c,x,y;
	lake(int _c,int _x,int _y)
	{
		c=_c;x=_x;y=_y;
	}
	
};

bool cmp(const lake a,const lake b)
{
	return a.c<b.c;
}

void pr()
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << grid[i][j];
		}cout <<endl;
	}
}
int main()
{
	cin >>n>>m>>k;

	for(int i=0;i<n;i++)cin >>grid[i];

	int mn=999999;
	vector<lake>pos;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j]=='.'&&!vis[i][j]){
				dfs(i,j);
				if(!share)pos.push_back(lake(c,i,j));
				c=0;
				share=0;
			}
		}
	}
	sort(pos.begin(),pos.end(),cmp);

	// for(auto x:pos){
	// 	  cout << x.x<<" "<<x.y<<endl;
	// }
	//cout <<"size: "<< pos.size()<<endl;
	int ans=0;
	if(pos.size()==k){
		cout <<0<<endl;
		pr();
		return 0;
	}
	int len=pos.size()-k;
	for(int i=0;i<len;i++){
		clr();
		ans+=pos[i].c;
		fill(pos[i].x,pos[i].y);
	}
	cout <<ans<<endl;
	pr();

	return 0;
	
}