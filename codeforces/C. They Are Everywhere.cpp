#include <bits/stdc++.h>
using namespace std;
int ch[256];

int main()
{
    int n;
    cin >>n;
    string s,u="";
    cin >>s;
    int x=n;
    for(int i=0,j=0;i<n;i++){
        if(ch[s[i]]==0){
            x=n;ch[s[i]]++;
        }
        while(j<i&&ch[s[j]]>1){
            ch[s[j]]--;
            j++;
        }
        x=min(x,i-j+1);
    }
    cout <<x<<endl;
    return 0;
}
