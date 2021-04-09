#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        double x1,x2,x3,v1,v2;
        cin >>x1>>x2>>x3>>v1>>v2;
        double s1=x3-x1,s2=x2-x3;
        double t1=s1/v1,t2=s2/v2;
        if(t1<t2){puts("Chef");}
        else if(t1>t2){puts("Kefa");}
        else{puts("Draw");}

    }
    return 0;
}
