#include <bits/stdc++.h>
using namespace std;
string f(int n)
{
    string q="1";
    for(int i=1;i<=(n/2);i++){
        q+='0';
    }
    return q;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string p="1";
        cout <<p<<" "<<f(n)<<endl;
    }
    return 0;
}
