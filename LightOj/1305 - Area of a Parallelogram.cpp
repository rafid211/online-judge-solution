#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,T,area = 0;
    cin >>T;
    for(int i=1;i<=T;i++){
        cin >>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        Dx = Ax+Cx-Bx;
        Dy = Ay+Cy-By;
        area = abs((Ax*(By-Cy))+(Bx*(Cy-Ay))+(Cx*(Ay-By)));
        cout <<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<area<<endl;
    }
    return 0;
}
