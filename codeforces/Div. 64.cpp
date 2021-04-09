#include <bits/stdc++.h>
using namespace std;
//vector <int> v;
void check(string s)
{
    int one=0,digit=0,flag,zero=0,n=0;
    if(s.size()>=7){
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                n++;
                flag =i;
                break;
            }
        }
        for(int k=flag+1;k<s.size();k++){
            digit++;
            if(s[k]=='1'){
                one++;
            }
        }

        if(n>=1 && (digit-one) >=6){
            cout <<"yes"<<endl;
        }
        else{
            cout <<"no"<<endl;
        }
    }
    else{
        cout <<"no"<<endl;
    }
    //cout <<flag<<endl;
}
int main()
{
    string num;
    cin >>num;
    check(num);
    return 0;
}


