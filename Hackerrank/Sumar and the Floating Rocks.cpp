#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){return (b==0)?a:gcd(b,a%b);}
int main()
{
    int t;
    cin >>t;
    while(t--){
        int x1,x2,y1,y2;
        cin >>x1>>y1>>x2>>y2;
        int ans=gcd((abs(x2-x1)),(abs(y2-y1)))-1;
        cout <<ans<<endl;
    }
    return 0;
}
