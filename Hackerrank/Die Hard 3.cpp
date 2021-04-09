#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;
        int gcd=__gcd(a,b);
        if(max(a,b)<c){cout <<"NO"<<endl;continue;}
        cout <<((c%gcd)?"NO":"YES")<<endl;
    }
    return 0;
}
