#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    string s,res;
    cin >>s;
    int len = s.size();
    int j=0,i=0;
    while(i<len){
       if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
           i+=3;
       }
       else{
          res+=s[i];
          //cout <<res<<endl;
          i++;
          if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            res+=" ";
          }
       }
    }
    cout <<res<<endl;
}

