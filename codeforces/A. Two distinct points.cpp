#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >>t;
    while(t--){
        int a,b,c,d;
        cin >>a>>b>>c>>d;

        if(b==c)cout << b-1<<" "<<c+1<<endl;
        else cout <<b<<" "<<c<<endl;
    }
}
