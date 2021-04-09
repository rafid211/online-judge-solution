#include <iostream>
using namespace std;
int main()
{
    int a,n=0;
    bool z=1;
    for(int i=0;i<5;i++){
        cin >>a;
        n+=a;
    }
    if(n==0){cout <<-1;return 0;}
    cout << ((n%5)?-1:n/5)<<endl;
    return 0;
}
