#include <bits/stdc++.h>
using namespace std;
bool num[10];
int main()
{
    int n,m;
    cin >>n>>m;
    int x[n],y[m];
    for(int i=0;i<n;i++)cin >>x[i];

    for(int i=0;i<m;i++)cin >>y[i],num[y[i]]=1;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        if(num[x[i]])v.push_back(make_pair(i,x[i]));
    }
    stable_sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout <<v[i].second<<" ";

    cout <<endl;
    return 0;
}
