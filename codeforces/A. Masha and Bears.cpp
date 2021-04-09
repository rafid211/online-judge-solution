#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    if(c*2>=d && d<=c){
        cout <<a<<endl<<b<<endl<<c<<endl;
    }
    else{
        cout <<-1;
    }
    return 0;
}
