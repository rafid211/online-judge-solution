#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >>n>>s;
    map<char,char>m;
    for(int i='a',j=0;i<='z';i++,j++){
        m[(char)i]=s[j];
    }
    for(int i='A',j=0;i<='Z';i++,j++){
        m[(char)i]=toupper(s[j]);
    }
    m['?']='?';
    m['!']='!';
    m[',']=',';
    m['.']='.';
    m['_']=' ';
    //for(auto x:m)cout <<x.first<<" "<<x.second<<endl;
    while(n--)
    {
        string r;
        cin >>r;
        for(int i=0;i<r.size();i++){
            r[i]=m[r[i]];
        }
        cout <<r<<endl;

    }
}
