#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int t;

    cin >>t;
    while(t--){
        int l,b;
        cin >>l>>b;
        int g=gcd(l,b);
        cout <<(l/g)*(b/g)<<endl;
    }
    return 0;
}
