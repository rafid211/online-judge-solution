#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string s="";
    int x=0;
    while(n--){
        int a,b;
        cin >>a>>b;
        if(x+a<=500){
            x+=a;s+='A';
        }
        else {
            s+='G';
            x-=b;
        }
    }
    cout <<s<<endl;

}
