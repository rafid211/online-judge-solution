#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int val = n-10;
    if(val==0){
        cout <<0<<endl;
    }
    else if(val==1 || val==11){
        cout <<4<<endl;
    }
    else if(val>=2 && val<=9){
        cout <<4<<endl;
    }
    else if(val==10){
        int card = 4+4+4+3;
        cout <<card<<endl;
    }
    else{
        cout <<0<<endl;
    }
    return 0;
}
