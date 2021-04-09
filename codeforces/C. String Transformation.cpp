#include <bits/stdc++.h>
using namespace std;
bool ch[256];
int main()
{
    string s;
    cin >>s;

    int n=s.size();
    char c='a';
    for(int i=0;i<n;i++){
        if(c>'z')break;
        else if(s[i]==c){c++;}
        else if(s[i]<c){s[i]=c;c++;}
    }
    //cout <<c<<endl;
    if(c>'z'){
        cout <<s<<endl;
    }
    else{
        cout <<-1<<endl;
    }
    return 0;
}

