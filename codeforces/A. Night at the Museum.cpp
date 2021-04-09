#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int len = s.size();
    char des,source='a';
    int total = 0,a,b;
    for(int i=0;i<len;i++){
        des = s[i];
        if(des>source){
            a = des-source;
            b = source-des+26;
            if(a>b){
                total+=b;
            }
            else{
                total+=a;
            }
            source = des;
            a=b=0;
        }
        if(source>des){
            a = source-des;
            b = des-source+26;
            if(a>b){
                total+=b;
            }
            else{
                total+=a;
            }
            source = des;
        }
    }
    cout <<total<<endl;

//    for(int i=97;i<123;i++){
//        cout <<(char)i<<" "<<i<<endl;
//    }
    return 0;

}
