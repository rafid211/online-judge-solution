#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    stack<char>x;
    for(int i=0;i<s.size();i++){
        if(!x.empty()&&x.top()==s[i])x.pop();
        else x.push(s[i]);
    }
    if(x.empty())cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
}
