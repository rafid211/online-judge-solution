#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n;
    cin >>n;
    int h,m;
    int c=n;
    while(n--){
        cin >>h>>m;
        int t=(h*60)+m;
        mp[t]++;
    }
    int mx=-999;
    for(auto x:mp){
        //if(x.second){
            mx=max(mx,x.second);
        //}
    }
    cout <<mx<<endl;
    return 0;
}
