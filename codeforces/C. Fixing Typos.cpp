#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int len=s.size();

    for(int i=s.size()-1;i>=2;i--){

        if(s[i]==s[i-1]&&s[i-1]==s[i-2])s.erase(i,1);
    }
    for(int i=s.size()-1;i>=3;i--){
        if(s[i]==s[i-1]&&s[i-2]==s[i-3])s.erase(i-3,1);
    }
    cout <<s<<endl;
}
