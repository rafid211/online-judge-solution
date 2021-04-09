#include <bits/stdc++.h>
using namespace std;

vector<int>a[2007],b[2007];
int main()
{
    int n,m;
    cin >>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;cin >>x;
            int idx=i+j;
            a[idx].push_back(x);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;cin >>x;
            int idx=i+j;
            b[idx].push_back(x);
        }
    }
    for(int i=0;i<(n+m-1);i++){
        sort(a[i].begin(),a[i].end());
        sort(b[i].begin(),b[i].end());
    }
    bool ok=1;
    for(int i=0;i<(n+m-1);i++){
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]!=b[i][j]){ok=0;break;}
        }
    }
    if(ok)puts("YES");
    else puts("NO");

    return 0;
}
