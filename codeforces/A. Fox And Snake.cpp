#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >>n>>m;
    string s,d="#";
    for(int i=0;i<m;i++){s+='#';}
    for(int i=0;i<m-1;i++){d+='.';}
    d+='#';
    //cout <<s<<endl<<d;
    bool a=1,b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a&&(i+1)%2==0){
                if(j==0)d[j]='.';
                if(j==m-1){d[j]='#';a=0;b=1;}
                cout <<d[j];
            }
            else if(b&&(i+1)%2==0){
                if(j==0)d[j]='#';
                if(j==m-1){d[j]='.';a=1;b=0;}
                cout <<d[j];
            }
            else{cout <<s[j];}
        }
        cout <<endl;
    }
}
