#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string s;cin >>s;

    int c=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){c++;
            if(s[i]=='B'){
                if(s[i+1]=='G')s[i]='R';
                else s[i]='G';
            }
            else if(s[i]=='R'){
                if(s[i+1]=='B')s[i]='G';
                else s[i]='B';
            }
            else if(s[i]=='G'){
                if(s[i+1]=='B')s[i]='R';
                else s[i]='B';
            }
        }
    }
    cout <<c<<'\n'<<s<<endl;
}
