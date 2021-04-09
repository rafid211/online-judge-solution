#include <bits/stdc++.h>
using namespace std;
bool f(string s)
{
    int c=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='c'&&s[i+1]=='h')return true;
        else if(s[i]=='h'&&s[i+1]=='e')return true;
        else if(s[i]=='e'&&s[i+1]=='f')return true;
    }
    return false;
}
int main()

{
    int n;
    cin >>n;
    int c=0;
    string s;
    while(n--){
       cin >>s;
       if(f(s))c++;
       //cout <<c<<endl;
    }
    cout <<c<<endl;
    return 0;
}
