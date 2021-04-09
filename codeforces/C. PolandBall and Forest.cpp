#include <bits/stdc++.h>
using namespace std;

vector<int>node[10005];
bool vis[10005];

void dfs(int s)
{
	vis[s]=1;
	for(int i=0;i<node[s].size();i++){
		int x=node[s][i];
		if(!vis[x]){
			dfs(x);
		}
	}
}
int main()
{
	int n;
	cin >>n;
	for(int i=1;i<=n;i++){
		int x;
		cin >>x;
		node[x].push_back(i);
		node[i].push_back(x);
	}
	int c=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			c++;
		}
	}
	cout <<c<<endl;
	return 0;
}