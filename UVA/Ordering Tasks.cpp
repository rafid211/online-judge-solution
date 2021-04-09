#include <bits/stdc++.h>
using namespace std;

vector<int>node[107];
bool vis[107];
stack<int>st;

void dfs(int s)
{

    for(int i=0;i<node[s].size();i++){
         int x=node[s][i];
         if(!vis[x]){
             dfs(x);
         }
    }
    st.push(s);
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m) && !(n == 0 && m == 0))
    {
        //if(n==m&&n==0)break;
        for(int i=0;i<107;i++)node[i].clear(),vis[i]=0;
        while(!st.empty())st.pop();

        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            node[x].push_back(y);
            //node[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        bool flag=1;
        while(!st.empty()){
            int x=st.top();
            st.pop();
            cout << x<<" ";
        }
        cout <<"\n";

    }
}
