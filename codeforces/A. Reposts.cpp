#include <bits/stdc++.h>
using namespace std;
vector<int>post[207];
map<string ,int>m;
void fix(string &a,string &b)
{
    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&&a[i]<='Z')a[i]=tolower(a[i]);
    }
    for(int i=0;i<b.size();i++){
        if(b[i]>='A'&&b[i]<='Z')b[i]=tolower(b[i]);
    }
}
bool vis[403];
int lev[403];
void dfs(int s)
{
    vis[s]=1;
    int len=post[s].size();
    for(int i=0;i<len;i++){
        int x=post[s][i];
        if(!vis[x]){
            lev[x]=lev[s]+1;
            dfs(x);
        }
    }
}
int main()
{
    int n;
    cin >>n;
    int x=0;
    for(int i=0;i<n;i++){
        string a,b,c;
        cin >> a>> b>> c;
        fix(a,c);
        if(!m.count(c))m[c]=x++;
        if(!m.count(a))m[a]=x++;
        post[m[c]].push_back(m[a]);
    }
    lev[0]=1;
    dfs(0);
    int ans=0;
    for(auto x:m){
        ans=max(ans,lev[x.second]);
    }
    cout << ans<<endl;

    return 0;

}
