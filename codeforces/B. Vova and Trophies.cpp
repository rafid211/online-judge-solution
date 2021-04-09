#include <bits/stdc++.h>
using namespace std;
#define MX 200005
int left[MX],right[MX];
int main()
{
    int n;cin >>n;
    string s;
    cin >>s;
    int g=0;
    for(int i=0;i<n;i++){
        if(s[i]=='S'){
            left[i]=g;
            g=0;
        }
        else g++;
    }
    g=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='S'){
            right[i]=g;
            g=0;
        }
        else g++;
    }
}
