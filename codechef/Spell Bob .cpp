#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        string s,r;
        cin >>s>>r;
        int b=0,o=0;
        for(int i=0;i<3;i++){
            if(s[i]=='b'||r[i]=='b'||s[i]=='o'||r[i]=='o'){
                if(s[i]=='o'||r[i]=='o')o++;
                if(s[i]=='b'||r[i]=='b')b++;
            }
            else{
                b=-1;break;
            }
        }
        if(b>=2&&o)cout <<"yes"<<endl;
        else cout <<"no"<<endl;
    }
    return 0;
}
