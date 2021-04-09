#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,caseno=0;
    cin >>t;
    while(t--){
        int n,x=0,b[102],w[102];
        cin >>n;
        for(int i=0;i<n;i++)cin >>w[i];
        for(int i=0;i<n;i++)cin >>b[i];

        for(int i=0;i<n;i++){
            x^=(b[i]-w[i]-1);
        }
       // cout <<x<<endl;
        cout <<"Case "<<++caseno<<": ";
        if(x==0){
            cout <<"black wins"<<endl;
        }
        else{cout <<"white wins"<<endl;}
    }
    return 0;
}
