#include <iostream>
using namespace std;
int main()
{
    int n,d;
    cin >>n>>d;
    string s;
    cin >>s;
    int len = s.length()-1;
    int i=0,j=1,step=0;

    while(j<=len){
        if(s[j]=='1' && (j-i)<=d){
            cout <<j<<endl;
            i=j;
            step++;
        }
       j++;
        //cout <<step<<endl;
    }
    cout <<step;

}
