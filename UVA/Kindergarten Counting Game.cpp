#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int c=0;
        bool ok=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){ok=1;}
            else{c+=ok;ok=0;}
        }
        cout <<c+ok<<endl;
    }

return 0;
}
