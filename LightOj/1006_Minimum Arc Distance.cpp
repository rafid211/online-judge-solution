#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define pi 3.141592653
int main()
{
    double a,b,o,Ox,Oy,Ax,Ay,Bx,By,PA,PB,PO;
    int T;
    cin >>T;
    for(int i=1;i<=T;i++){
        cin >>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        double OBx = (Ox-Bx)*(Ox-Bx);
        double OBy = (Oy-By)*(Oy-By);
        a = sqrt(OBx+OBy);
        double OAx = (Ox-Ax)*(Ox-Ax);
        double OAy = (Oy-Ay)*(Oy-Ay);
        b = sqrt(OAx+OAy);
        double BAx = (Bx-Ax)*(Bx-Ax);
        double BAy = (By-Ay)*(By-Ay);
        o = sqrt(BAx+BAy);
        PO = ((a*a)+(b*b)-(o*o))/(2*a*b);
        double cen_ang = (acos(PO)*180)/pi;
        double r = a;
        double arc_len = (2*pi*r*cen_ang)/360;
        printf("Case %d: %0.8lf\n",i,arc_len);
    }
    return 0;
}
