#include <iostream>
using namespace std;
int main()
{
    int n,t,a,day;
    cin >>n>>t;
    for(int i=0;i<n;i++){
        cin >>a;
        if(t>0){
            day++;
        }
        t=(86400-a);
    }
    cout <<day<<endl;
}
