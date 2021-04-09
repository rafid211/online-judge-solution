#include <bits/stdc++.h>
using namespace std;
vector<int>bug[2007];
bool vis[2007];
int col[2007];
bool ok=1;
void dfs(int s)
{
    vis[s]=1;
    int len=bug[s].size();
    for(int i=0;i<len;i++){
        int x=bug[s][i];
        if(!vis[x]){
            col[x]=!col[s];
            dfs(x);
        }
        else if(col[x]==col[s]){
            ok=0;
            return;
        }

    }
}
int cnt=0;
void solve()
{
    ok=1;
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        bug[a].push_back(b);
        bug[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            col[i]=0;
            dfs(i);
        }
    }
    printf("Scenario #%d:\n",++cnt);
    if(!ok){
        puts("Suspicious bugs found!");
    }
    else{
        puts("No suspicious bugs found!");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        memset(vis,0,sizeof(vis));
        memset(col,-1,sizeof(col));
        for(int i=0;i<2007;i++)bug[i].clear();
        solve();
    }



}
