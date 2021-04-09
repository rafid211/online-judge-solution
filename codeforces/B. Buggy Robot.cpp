#include <bits/stdc++.h>
using namespace std;
int pos(string s,int n)
{
    int x=0,y=0,c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            y++;
        }
        else if(s[i]=='D'){
            y--;
        }
        else if(s[i]=='R'){
            x++;
        }
        else if(s[i]=='L'){
            x--;
        }
    }
    return (abs(x)+abs(y));
}
int main()
{
    int n;
    string s;
    cin >>n;
    cin >>s;
    int xy = pos(s,n);
    cout <<(n-xy)<<endl;
    return 0;
}
