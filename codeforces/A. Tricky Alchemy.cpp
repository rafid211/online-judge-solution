#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int main()
{
    i64 a,b;
    cin >>a>>b;
    i64 x,y,z;
    cin >>x>>y>>z;
    i64 yellow=0,green=0,blue=0,YEL=0,BLU=0;

    yellow +=2*x+y;
    blue+=3*z+y;

    if(yellow>=a){
        YEL = yellow-a;
    }
    if(blue>=b){
        BLU = blue-b;
    }

    i64 acq = (YEL+BLU);
    cout <<acq<<endl;
    return 0;
}
