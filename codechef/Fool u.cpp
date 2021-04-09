#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    int a;
    while(cin >>a){
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
    cout <<endl;
    return 0;
}
