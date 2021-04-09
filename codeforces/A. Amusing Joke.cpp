#include <iostream>
using namespace std;
int main()
{
    string a,b,c;
    int sa[26],sc[26];
    cin >>a>>b>>c;
    for(int j=0;j<26;j++){
        sa[j]=0;
        sc[j]=0;
    }
    for(int i=0;i<a.size();i++){
        sa[a[i]-65]++;
    }
    for(int i=0;i<b.size();i++){
        sa[b[i]-65]++;
    }
    for(int i=0;i<c.size();i++){
         sc[c[i]-65]++;
    }
    bool check=true;
    for(int i=0;i<26;i++){
        if(sa[i]==sc[i]){
            check = true;
            //char c = sa[i]+65;
            //cout <<c<<endl;
        }
        else{
            check = false;
            break;
        }
        //cout <<sa[i]<<endl;
    }
    if(check){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
