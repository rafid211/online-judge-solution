#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    int x=a.first-a.second;
    int y=b.first-b.second;
    return x>y;
}
int main()
{
    int n,m;
    cin >>n>>m;
    long long s=0,x=0;
    vector<pair<int,int> >v(n);
    for(int i=0;i<n;i++){
        cin >>v[i].first>>v[i].second;
        x+=v[i].second;
        s+=v[i].first;
    }
    if(x>m){return cout <<-1<<endl,0;}
    sort(v.begin(),v.end(),cmp);
    int c=0;
    for(int i=0;i<n;i++){
        if(s<=m){cout <<c<<endl;return 0;}
        int go=v[i].first-v[i].second;
        s-=go;c++;
    }
    cout <<c<<endl;
}
