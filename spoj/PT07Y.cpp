#include <bits/stdc++.h>
using namespace std;
vector<int>node[10007];
bool vis[10007];
void dfs(int s)
{
    vis[s]=1;
    int len=node[s].size();
    for(int i=0;i<len;i++){
        int x=node[s][i];
        if(!vis[x])dfs(x);
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        node[a].push_back(b);
        node[b].push_back(a);
    }
    if(n-1!=m){
        puts("NO");
        return 0;
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            c++;
        }
    }
    //cout << c<<endl;
    if(c>1)puts("NO");
    else puts("YES");

    return 0;

}
