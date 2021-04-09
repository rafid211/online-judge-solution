#include <bits/stdc++.h>
using namespace std;
int p[107],q[107];
bool vis[107];
int k=0;
bool dfs(int x,int y)
{
    vis[x]=1;
    if(x==y)return 1;
    int a=p[x],b=q[x];//cout << x<<" "<<y<<endl;
    for(int i=1;i<=k;i++){
        int c=p[i],d=q[i];
        if(((c<a&&a<d)||(c<b&&b<d))&&!vis[i]){
            //vis[i]=1;
            if(dfs(i,y))return 1;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        int t,x,y;
        cin >>t>>x>>y;
        if(t==1){
            k++;
            p[k]=x;
            q[k]=y;
        }
        else{
            for(int fuk=0;fuk<105;fuk++)vis[fuk]=0;
            bool b=dfs(x,y);
            if(b)puts("YES");
            else puts("NO");
        }
    }
    return 0;
}
