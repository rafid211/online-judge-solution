#include <bits/stdc++.h>
using namespace std;
int a[102][102];
int main()
{
    int n,m,d;
    cin >>n>>m>>d;
    vector<int>v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin >>a[i][j];
    }
    int c=0;
    set<int>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v.push_back(a[i][j]);
            s.insert(a[i][j]%d);
        }
    }
    if(s.size()>1)return cout <<-1<<endl,0;
    sort(v.begin(),v.end());
    int x=0,idx=((n*m)/2)+1;
    //cout << v[idx]<<endl;
    for(int i=1;i<=n*m;i++){
        x+=abs(v[i]-v[idx]);
    }
    cout << x/d<<endl;
}
