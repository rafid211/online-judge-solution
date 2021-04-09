#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int i=0,c=0;
    bool flag = false;
    while(i<s.size()){
        if(s[i]=='1'){
            c++;
            if(c==7){
                //cout <<"c "<<endl;
                flag= true;
                break;
            }
            //cout <<c<<endl;
        }
        else{
            c=0;
        }
        i++;
    }

    if(!flag){
        i=0;
        while(i<s.size()){
            if(s[i]=='0'){
                c++;
                //cout <<c<<endl;
                if(c==7){
                    flag = true;
                    break;
                }
            //cout <<c<<endl;
            }
            else{
                c=0;
            }
            i++;
        }
    }
    if(flag && c==7){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}

