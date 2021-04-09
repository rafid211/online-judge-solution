#include <bits/stdc++.h>
using namespace std;
int subsequences(string s)
{
    int c=0,flag;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Q'){
            for(int j=i+1;j<s.size();j++){
                if(s[j]=='A'){
                    flag=j;
                    for(int i=flag;i<s.size();i++){
                        if(s[i]=='Q'){
                            c++;
                        }
                    }
                }
            }
        }
    }
   return c;
}
int main()
{
    string s;
    cin >>s;
    cout <<subsequences(s)<<endl;
    return 0;
}
