#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int c=0,p=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){c++;}
        else if(s[i]=='o'){p++;}
    }
    if(p>0&&c%p==0){puts("YES");}
    else if(p==0||c==0){puts("YES");}
    else {puts("NO");}

    return 0;
}
