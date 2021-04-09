#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int>node[100007];
int a[100007];
int cat=0;
bool vis[100007];
void dfs(int s,int c)
{
   // cout <<"up: "<<s<<endl;
    //if(c>m)return;
    vis[s]=1;
    int cnt=1;
    int len=node[s].size();
    for(int i=0;i<len;i++){
        int x=node[s][i];
        if(!vis[x]){
            cnt=0;
            dfs(x,c*a[x]+a[x]);
            //cout <<"down "<< x<<endl;
        }
    }
    //cout << "xxx: "<<s<<endl;
    cat+=cnt;
}
int main()
{
    cin >> n>>m;

    for(int i=1;i<=n;i++)cin >>a[i];

    for(int i=1;i<=n-1;i++){
        int x,y;
        cin >> x>>y;
        node[x].push_back(y);
        node[y].push_back(x);
    }

    dfs(1,a[1]);
    cout << cat<<endl;

}
