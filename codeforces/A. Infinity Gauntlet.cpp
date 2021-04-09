#include <bits/stdc++.h>
using namespace std;
map<string,string>m;
int main()
{
    int n;
    cin >>n;
    m["purple"]="Power";
    m["green"]="Time";
    m["blue"]="Space";
    m["orange"]="Soul";
    m["red"]="Reality";
    m["yellow"]="Mind";
    string s[6];
    for(int i=0;i<n;i++)cin >>s[i];

    for(int i=0;i<n;i++){
        m.erase(s[i]);
    }
    map<string,string>::iterator it;
    cout <<m.size()<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout << it->second<<endl;
    }
    return 0;
}
