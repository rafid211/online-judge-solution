#include <bits/stdc++.h>
using namespace std;
#define MX 50004
vector<int>node[MX];
bool vis[MX];
int par[MX];

void dfs(int s)
{
    vis[s]=1;
    int len=node[s].size();
    for(int i=0;i<len;i++){
        int x=node[s][i];
        if(!vis[x]){
            par[x]=s;
            dfs(x);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n;
    cin >>n;
    int r1,r2;
    cin >>r1>>r2;

    for(int i=1;i<=n;i++){
        if(i==r1)continue;
        int p;cin >>p;
        node[p].push_back(i);
        node[i].push_back(p);
    }
    dfs(r2);
    for(int i=1;i<=n;i++){
        if(i==r2)continue;

        cout << par[i]<<" ";
    }
    return 0;

}
