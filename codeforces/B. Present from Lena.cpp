#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin >>n;

    for(int i=0,x=n;i<=n;i++){

        int d=0;
        for(int j=0,k=x;j<=n;j++,k--){
            if(k>0)cout <<"  ";
            else{
                if(d==0)cout <<d++;
                else cout <<" "<<d++;
            }
        }
        d--;
        if(d>0)cout <<" ";
        bool sp=1;
        for(int j=d-1;j>=0;j--){
            if(j==0)cout<<j;
            else cout<<j<<" ";
        }
        cout <<endl;
        x--;

    }
    for(int i=0,x=1;i<=n;i++,x++){
        int d=0;
        for(int j=0,k=x;j<=n;j++,k--){
            if(k>0)cout <<"  ";
            else{
               if(d==0)cout <<d++;
                else cout <<" "<<d++;
            }
        }
        d--;
        if(d>0)cout <<" ";
        for(int j=d-1;j>=0;j--){
            if(j==0)cout <<(j);
            else cout <<j<<" ";
        }
        cout <<endl;
    }



    return 0;
}
