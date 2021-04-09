#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    while(n--){
        int px,py,qx,qy;
        cin >>px>>py>>qx>>qy;
        int x,y;
        x=(qx*2)-px;
        y=(2*qy)-py;
        cout <<x<<" "<<y<<endl;
    }
    return 0;
}
