#include <bits/stdc++.h>
using namespace std;
int main()
{
    string r;
    cin >>r;
    string s = '#'+r;
    long long oda=0,odb=0,evena=0,evenb=0;
    long long odd=0,even=0;
    for(int i=1;i<s.size();i++){odd++;
        if(i%2){//odd
            if(s[i]=='a'){
                odd+=oda;
                even+=evena;
                oda++;
            }
            else {
                odd+=odb;
                even+=evenb;
                odb++;
            }
        }
        else {//even
            if(s[i]=='a'){
                even+=oda;
                odd+=evena;
                evena++;
            }
            else {
                even+=odb;
                odd+=evenb;
                evenb++;
            }
        }
    }
    cout <<even<<" "<<odd<<endl;
}
