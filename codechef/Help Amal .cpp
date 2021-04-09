#include <bits/stdc++.h>
using namespace std;
vector<string>v;
void word(string s)
{
    string name;
    stringstream ss(s);
    while(ss>>name){
        v.push_back(name);
    }
}
int main()
{
    string s;
    getline(cin,s);
    word(s);
    int n=v.size();
    string ans="";
    for(int i=0;i<n-1;i++){
        char c=v[i][0];
        ans+=c;ans+='.';
    }
    cout <<ans+v[n-1]<<endl;
    return 0;
}
