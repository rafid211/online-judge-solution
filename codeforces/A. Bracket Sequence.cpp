#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int n=s.size();

    stack <char> stk;
    string ans="";
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            stk.push(s[i]);
            //ans.push_back(s[i]);
        }
        else{
            if(s[i]==')'&&stk.top()=='('){
                stk.pop();
            }
            else if(s[i]=='}'&&stk.top()=='{'){
                stk.pop();
            }
            else if(s[i]==']'&&stk.top()=='['){
                stk.pop();
                c++;
            }
        }
    }
    cout <<c;
}
