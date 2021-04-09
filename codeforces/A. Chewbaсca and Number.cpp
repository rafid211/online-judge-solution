#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;

    for(int i=0;i<s.size();i++){
        if(i==0&&(s[i]-48)>4&&(s[i]-48)<9){
            s[i]=(9-(s[i]-48))+48;
        }
        else if((s[i]-48)>4){
            s[i]=(9-(s[i]-48))+48;
        }
    }
    cout <<s<<endl;

    return 0

}

