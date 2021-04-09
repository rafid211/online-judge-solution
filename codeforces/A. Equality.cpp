#include <bits/stdc++.h>
using namespace std;
int f[26];
int main()
{
    int n,k;
    cin >>n>>k;
    string s;
    cin >>s;
    int x=s.size();
    for(int i=0;i<x;i++){
        int p=s[i]-'A';
        f[p]++;
    }
    int ans=INT_MAX;
    for(int i=0;i<k;i++){
        ans=min(f[i],ans);
    }
    cout <<ans*k<<endl;
    return 0;

}
