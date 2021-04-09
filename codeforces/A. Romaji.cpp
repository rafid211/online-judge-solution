#include <bits/stdc++.h>
using namespace std;
bool v(char c)
{
    if(c=='a'||c=='o'||c=='u'||c=='i'||c=='e')return true;

    return false;
}
int main()
{
    string s;
    cin >>s;

    bool ok=0,ex=1;
    int n=s.size();
    for(int i=0;i<s.size()-1;i++){
        char c=s[i];
        if(c!='n'&&!v(c)&&!v(s[i+1])){ex=0;}

    }
    if(ex){
      if(s[n-1]!='n'&&!v(s[n-1])&&!v(s[n-2])){puts("NO");}
      else{puts("YES");}

    }
    else {puts("NO");}
    return 0;
}
