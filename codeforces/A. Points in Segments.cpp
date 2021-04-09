#include <bits/stdc++.h>
using namespace std;
int d[105];
int main()
{
    int n,m;
    cin >>n>>m;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a>>b;
        for(int x=a;x<=b;x++)d[x]=1;
    }
    int c=0;
    for(int i=1;i<=m;i++)if(!d[i])c++;
    cout <<c<<endl;
    for(int i=1;i<=m;i++)if(!d[i])cout <<i<<" ";
    //cout <<endl;
    return 0;
}
