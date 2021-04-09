#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
map<int,bool>vis;
void bfs(int n,int m)
{
    int ans=0;
    queue<pii>q;
    q.push({n,0});
    while(!q.empty()){
        pii u=q.front();
        //cout << u.first<<endl;
        if(u.first==m){
            ans=u.second;
            break;
        }
        q.pop();
        int x=u.first*2;
        if(x>0&&!vis[x]&&x<10007){
            vis[x]=1;
            q.push({x,u.second+1});
        }

        x=u.first-1;
        if(x>0&&!vis[x]&&x<10007){
            vis[x]=1;
            q.push({x,u.second+1});
        }
    }
    cout <<ans<<endl;
}
int main()
{
    int n,m;
    cin >>n>>m;
    bfs(n,m);
}
