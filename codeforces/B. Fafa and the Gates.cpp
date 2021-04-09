#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0;
    cin >>n;
    string s;
    cin >>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){x++;
            if(s[i+1]=='R'&&i+1<n&&x==y)c++;
        }
        if(s[i]=='U'){y++;
            if(s[i+1]=='U'&&i+1<n&&x==y)c++;
        }
    }
    cout <<c<<endl;
    return 0;

}
