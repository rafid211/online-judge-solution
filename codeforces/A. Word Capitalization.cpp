#include <iostream>
using namespace std;
int main()
{
    string s,res;
    cin >>s;
    if(islower(s[0])){
       char c = s[0]-32;
       s.erase(0,1);
       res+=c;
    }
    res+=s;
    cout <<res<<endl;
}
