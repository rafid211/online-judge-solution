#include <bits/stdc++.h>
using namespace std;
map<int,vector<int> >node;
map<int,bool>vis;
map<int,int>path;
map<int,int>deg;

void dfs(int s)
{
    vis[s]=1;
    int len=node[s].size();
    for(int i=0;i<len;i++){
        int x=node[s][i];
        if(!vis[x]){
            path[x]=s;
            dfs(x);
        }
    }
}
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
    int s,des;
    for(auto x:deg){
        if(x.second==1){
            s=x.first;
            path[s]=0;
            dfs(x.first);
            break;
        }
    }
    for(auto x:deg){
        if(x.second==1&&x.first!=s){
            des=x.first;
            break;
        }
    }
    while(path.count(des)){
        cout << des<<" ";
        des=path[des];
    }
}
