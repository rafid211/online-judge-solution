#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    string s,r;
    cin >>s;
    //reverse(r.begin(),r.end());
    //cout <<r<<endl;
    bool c=0;
    for(int i=0;i<s.size();i++){
        for(int k='a';k<='z';k++){
            string temp = s;
            char a = s[i];
            temp.replace(i,1,1,(char)k);
            //cout <<temp<<endl;
            r=temp;
            reverse(temp.begin(),temp.end());
            if(temp==r && temp!=s){
                c=1;
                //cout <<temp<<endl;
            }
        }
       // c=0;
    }

    cout <<((c)?"YES":"NO")<<endl;
    return 0;
}
