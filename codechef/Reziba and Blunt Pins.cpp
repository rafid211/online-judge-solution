#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;
        string rev=s;
        reverse(rev.begin(),rev.end());
        cout <<((rev==s)?"No":"Yes")<<endl;
    }
    return 0;
}
