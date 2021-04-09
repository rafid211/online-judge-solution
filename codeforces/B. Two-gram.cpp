#include <bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    map<string,int>:: iterator it;
    int n;
    cin >>n;
    string s,r="";
    cin >>s;
    for(int i=0;i<n-1;i++){
        r.push_back(s[i]);
        r.push_back(s[i+1]);
        //cout <<r<<endl;
        m[r]++;
        r="";
    }
    int x=INT_MIN;string ans;
    for(it=m.begin();it!=m.end();it++){
        int p = it->second;
        if(p>x){
          ans=it->first;x=p;
        }
    }
    cout <<ans<<endl;
    return 0;
}
