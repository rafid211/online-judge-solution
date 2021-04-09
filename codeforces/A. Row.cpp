#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    if(n==1&&s[0]=='0'){return puts("No"),0;}
    else if(n==1&&s[0]=='1'){return puts("Yes"),0;}
    else if(n<3){
        if((s[0]=='0'&&s[1]=='0')||(s[0]=='1'&&s[1]=='1')){
            puts("No");
        }
        else puts("Yes");
        return 0;
    }
    bool ok=1;
    for(int i=0;i<n;i++){
        if(i+1<n&&i+2<n&&s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'){
            ok=0;break;
        }
        else if(s[i]=='1'&&s[i+1]=='1'){
            ok=0;
            break;
        }

    }
    cout <<((ok)?"Yes":"No")<<endl;
    return 0;
}
