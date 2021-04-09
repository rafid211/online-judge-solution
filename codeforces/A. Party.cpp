#include <bits/stdc++.h>
using namespace std;
vector<int>node[2007];
bool vis[2007];
int lev[2007];
void bfs(int s)
{
    lev[s]=1;
    vis[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        bool ok=0;
        for(int i=0;i<node[u].size();i++){
            int x=node[u][i];
            if(!vis[x]){
                vis[x]=1;
                lev[x]=lev[u]+1;
                q.push(x);
            }
        }
//        if(ok)lev++;
    }
    //return lev;
}
int main()
{
    int n;
    cin >>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        int x;cin >>x;
        if(x!=-1){
            node[i].push_back(x);
            node[x].push_back(i);
        }
        else v.push_back(i);
    }
    int ans=0;
    for(auto x:v){
        if(!vis[x]){
            bfs(x);
        }
    }
    for(int i=1;i<=n;i++){
        ans=max(lev[i],ans);
    }
    cout << ans<<endl;
}
