#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int len =s.size();
    int lower=0,upper=0;
    for(int i=0;i<len;i++){
        if(islower(s[i])){
            lower++;
        }
        else if(isupper(s[i])){
            upper++;
        }
    }
    string res;
    if(lower==upper){
        for(int i=0;i<len;i++){
            if(isupper(s[i])){
                res+= s[i]+32;
            }
            else{
                res+=s[i];
            }
        }
        cout <<res<<endl;
    }
    else if(lower>upper){
        for(int i=0;i<len;i++){
            if(isupper(s[i])){
                res+= s[i]+32;
            }
            else{
                res+=s[i];
            }
        }
        cout <<res<<endl;
    }
    else if(upper>lower){
        for(int i=0;i<len;i++){
            if(islower(s[i])){
                res+= s[i]-32;
            }
            else{
                res+=s[i];
            }
        }
        cout <<res<<endl;
    }
    return 0;
}
