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
        int len=s.size();
        long long c=0;
        for(int i=0;i<len;i++){
            c+=s[i]-'0';
        }
        cout <<c<<endl;
    }
    return 0;
}
