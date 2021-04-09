#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >>a;
    string b;
    cin >>b;
    int x=0,y=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1')x=1;
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='1')y=1;
    }
    if(a.size()!=b.size()){
        puts("NO");
    }
    else if(x!=y)puts("NO");
    else puts("YES");

    return 0;
}
