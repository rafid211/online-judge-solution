#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,x=0;
    cin >>n;
    for(int i=1;i<=n;i++){
        cin >>s;
        if(s.find("++")==0 || s.find("++")==1){
            x++;
        }
        else if(s.find("--")==0 || s.find("--")==1){
            x--;
        }
    }
   cout <<x<<endl;
    return 0;
}
