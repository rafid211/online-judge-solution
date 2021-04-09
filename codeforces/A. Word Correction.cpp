#include <bits/stdc++.h>
using namespace std;
bool v(char c)
{
    if(c=='a'||c=='e'||
       c=='i'||c=='o'||
       c=='u'||c=='y'){return true;}
    return false;
}
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    bool done=0;
    while(1){done=0;
        for(int i=0;i<s.size();i++){
            if(v(s[i])&&v(s[i+1])&&i+1<s.size()){
                s.erase(i+1,1);
                done=true;
            }
        }
        if(!done)break;
    }

    cout <<s<<endl;
}
