#include <iostream>
using namespace std;
int main()
{
    int a,b,total=0,cana=0;
    cin >>a>>b;
    total+=a;
    while(1){
        cana+=a%b;
        if(cana==b){total+=cana;}
        a/=b;
        total+=a;

    }
   // cout <<(int)total<<endl;
    return 0;
}
