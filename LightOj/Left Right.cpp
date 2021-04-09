#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,caseno=0;
    cin >>t;
    while(t--){
        int k,a[205];
        cin >>k;
        for(int i=0;i<2*k;i++)cin >>a[i];
        int x=0;
        for(int i=0;i<=2*k-2;i+=2){
            x^=(a[i+1]-a[i]-1);
        }
        //cout <<x<<endl;
        cout <<"Case "<<++caseno<<": ";
        if(x!=0){
            cout <<"Alice"<<endl;
        }
        else{
            cout <<"Bob"<<endl;
        }
    }
    return 0;
}
