#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    bool ok=1;
    int c=0;
    while(ok){
        ok=0;
        for(int i=0;i<s.size();i++){
            if((i+2)<s.size()&&s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x'){
                s.erase(i,1);
                ok=1;c++;//cout <<s<<" "<<s.size()<<endl;
            }
        }
    }
    cout <<c<<endl;
    return 0;
}
