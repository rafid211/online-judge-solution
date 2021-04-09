#include <iostream>
using namespace std;
int main()
{
    int t,n,sum=0,dust;
    cin >>t;
    for(int i=1;i<=t;i++){
        cin >>n;
         sum=0;
        for(int j=1;j<=n;j++){
            cin >>dust;
            if(dust>=0){
                sum+=dust;
            }
        }
       cout <<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}

