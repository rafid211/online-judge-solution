#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin >>n>>a>>b;
    for(int i=1;i<=n;i++){
        if(a+1<=i&& n-b<=i){c++;
            //cout <<i<<endl;
        }
    }
    cout <<c<<endl;
}
