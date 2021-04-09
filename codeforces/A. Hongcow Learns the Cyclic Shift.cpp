#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    cin >>s;
    string r=s;
    bool same=false;

    int i,t=1;
    char c;
    while(!same){
        i = r.size()-1;
        c = r[i];
        if(!r.empty()){r.erase(i,1);}
        r.insert(r.begin(),c);
        //cout <<r<<endl;
        if(r==s){
            same=true;
        }
        else{
            t++;
        }
    }
    cout <<t<<endl;
    return 0;
}
