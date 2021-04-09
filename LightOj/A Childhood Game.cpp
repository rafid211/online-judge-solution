#include <bits/stdc++.h>
using namespace std;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define ll long long
int main()
{
   // input;
    //output;
    int t,cnt=0;
    cin >>t;
    while(t--){
        ll n;
        string s;
        cin >>n>>s;
        string a="Alice",b="Bob";
        cout <<"Case "<<++cnt<<": ";
        if(s==a){
            cout <<((n%3==0||n%3==2)?a:b)<<endl;
        }
        else{
            cout <<((n%3==1||n%3==2)?b:a)<<endl;
        }

    }
    return 0;
}
