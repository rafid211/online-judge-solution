#include <bits/stdc++.h>
using namespace std;
bool dig[1001];
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
        dig[a[i]]=1;
    }
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        if(dig[a[i]]){
           v.push_back(a[i]);
           dig[a[i]]=0;
        }
    }
    cout <<v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--)cout <<v[i]<<" ";

    cout <<endl;
    return 0;
}
