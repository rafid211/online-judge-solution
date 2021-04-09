#include <iostream>
#include <cmath>
#include <cstdio>
#define pi acos(-1)
using namespace std;
int main()
{
    double r;
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        cin >>r;
        double sq = 4*r*r;
        double cir = pi*r*r;
        double area = sq-cir;
        printf("Case %d: %0.2lf\n",i,area);
        sq=cir=area =0;
    }
    return 0;
}
