#include <bits/stdc++.h>
using namespace std;
inline int f(char c)
{
    int x=c-'a'+1;
    return 26-(x-1);
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;
        for(int i=0;i<n-1;i+=2){
            swap(s[i],s[i+1]);
        }
       //cout <<s<<endl;
       for(int i=0;i<n;i++){
           char c = (char)(f(s[i])+'a'-1);
           s[i]=c;
       }
       cout <<s<<endl;
    }
    return 0;
}
