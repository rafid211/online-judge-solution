#include <iostream>
using namespace std;
int main()
{
    string s,a1="AB",b1= "BA";
    cin >>s;
    bool f1=false,f2 = false;
    int n1,n2;
    if(s.find(a1)!=-1){
        f1 = true;n1 = s.find(a1);
        if(s.find(b1,n1+a1.size())!=-1){
            f2 = true;
        }
        else f1=f2=false;
    }
    //f1=f2=false;
     if(s.find(b1)!=-1){
        f2 = true;n2 = s.find(b1);
        if(s.find(a1,n2+b1.size())!=-1){
            f1 = true;

        }
    }

    cout <<((f1&f2)?"YES":"NO")<<endl;
    return 0;
}
