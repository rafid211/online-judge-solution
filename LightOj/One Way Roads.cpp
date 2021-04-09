#include <bits/stdc++.h>
using namespace std;
#define MX 107
int cost[107][107];
vector<int> node[MX];
bool vis[107];
int par[MX];
int n;
int soja,ulta;
bool done=0;
void dfs(int s)
{
    vis[s]=1;
    int len=node[s].size();
    for(int i=0;i<len;i++){
        int x=node[s][i];
        if(!vis[x]){
            soja+=cost[s][x];
            ulta+=cost[x][s];
            dfs(x);
        }
    }
    if(!done){
        done=1;
        soja+= cost[s][1];
        ulta+= cost[1][s];
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int cnt=0;
    while(t--){
        for(int i=0;i<MX;i++)node[i].clear();
        memset(vis,0,sizeof(vis));
        memset(cost,0,sizeof(cost));
        soja=ulta=0;
        done=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int a,b,c;
            cin >>a>>b>>c;
            node[a].push_back(b);
            node[b].push_back(a);

            cost[a][b]=0;
            cost[b][a]=c;
        }

        dfs(1);
        cout << "Case "<<++cnt<<": "<<min(soja,ulta)<<endl;

    }
}
