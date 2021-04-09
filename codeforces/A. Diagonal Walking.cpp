#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >>n;
    string s;
    cin  >>s;int c=0;
    while(1){bool ok=false;
        for(int i=0;i<s.size();i++){
            if((s[i]=='R'&&s[i+1]=='U')||s[i]=='U'&&s[i+1]=='R'){
                ok=true;
                s[i]='D';
                s.erase(i+1,1);
               // c++;
            }
        }
        if(!ok)break;
    }
    cout <<s.size()<<endl;
    return 0;
}
