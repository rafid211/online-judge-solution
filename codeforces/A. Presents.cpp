#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    map<int,int>m;
    int p;
    for(int i=1;i<=n;i++){
        cin>>p;
        m[p]=i;
    }
    for(auto i: m ){
        cout << i.second<<" ";
    }
    cout <<endl;
    return 0;
}
