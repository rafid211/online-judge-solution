#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >>s;
        int c=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='<')c++;
            else{
                c--;
                if(c<0){break;}
                else if(c==0)ans=max(ans,i+1);
            }
        }
        cout <<ans<<endl;
    }
}
