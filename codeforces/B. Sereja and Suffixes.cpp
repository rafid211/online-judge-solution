#include <bits/stdc++.h>
using namespace std;
int a[100005];
int go[100005];
map<int,int>mp;
int main()
{
    int n,m;
    cin >>n>>m;
    int dist=0;
    for(int i=1;i<=n;i++){
        cin >>a[i];
    }
    for(int i=n;i>=1;i--){
        if(!mp.count(a[i])){
            mp[a[i]]++;
            dist++;
        }
        go[i]=dist;
    }
   // for(int i=1;i<=n;i++)cout <<i<<" "<<go[i]<<endl;
    while(m--){
        int q;
        cin >>q;
        int ans=go[q];
        cout <<ans<<endl;
    }
}
