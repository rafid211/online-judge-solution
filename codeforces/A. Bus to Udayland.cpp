#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    //char a,b,c,d,e;
    string s;
    vector <string>v(n);
    bool faka=0;
    for(int i=0;i<n;i++){
        cin >>s;
        v[i]=s;
        if((s[0]=='O'&&s[1]=='O')||(s[3]=='O'&&s[4]=='O')){
            faka=1;
        }
    }
    if(!faka){cout <<"NO"<<endl;return 0;}
    faka=0;
    cout <<"YES"<<endl;
    for(int i=0;i<n;i++){
        string t=v[i];
        if(!faka&&(t[0]=='O'&&t[1]=='O')){
            t[0]='+';t[1]='+';faka=1;
        }
        else if(!faka&&(t[3]=='O'&&t[4]=='O')){
            t[3]='+';t[4]='+';faka=1;
        }
        cout <<t<<endl;

    }
    return 0;
}
