#include <iostream>
using namespace std;
int main()
{
    int n,a[3],c=0,nop=0;
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cin >>a[j];
            if(a[j]==1){
                c++;
            }
        }
        if(c>=2){
            nop++;
        }
        c=0;
    }
    cout <<nop<<endl;
    return 0;
}
