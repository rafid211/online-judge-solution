#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    string r=s;

    reverse(r.begin(),r.end());


    if(s==r){cout <<s<<endl;return 0;}
    r="";
    for(int i=s.size()-2;i>=0;i--)r+=s[i];
    //cout <<r<<endl;
    s+=r;
    cout <<s<<endl;
    return 0;

}
