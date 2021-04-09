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
        string r=s;
        reverse(r.begin(),r.end());
        if(r==s){cout <<"YES"<<endl;}
        else cout <<"NO"<<endl;
    }
    return 0;
}
