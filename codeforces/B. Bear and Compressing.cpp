#include <bits/stdc++.h>
using namespace std;

map<char,vector<string> >m;

int ans=0;
void dfs(char c,int cnt,int n)
{
    if(cnt==n){
        ans++;
        return;
    }
    for(int i=0;i<m[c].size();i++){
        string s=m[c][i];
        dfs(s[0],cnt+1,n);
    }
}
int main()
{
    int n,q;
    cin >>n>>q;

    for(int i=0;i<q;i++){
        string a;
        char b;
        cin >>a>>b;
        m[b].push_back(a);
    }
    dfs('a',1,n);
    cout <<ans<<endl;
}
