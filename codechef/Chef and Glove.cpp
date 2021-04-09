#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,finger[100005],glove[100005];
        cin >>n;
        for(int i=0;i<n;i++)cin >>finger[i];
        for(int i=0;i<n;i++)cin >>glove[i];

        bool fr=1,ba=1,both=1;
        for(int i=0;i<n;i++){
            if(finger[i]>glove[i]){fr=0;break;}
        }
        for(int i=n-1,j=0;j<n,i>=0;i--,j++){
            if(finger[j]>glove[i]){ba=0;break;}
        }
        if(fr&&ba){cout <<"both"<<endl;}
        else if(fr&&!ba){cout <<"front"<<endl;}
        else if(!fr&&ba){cout <<"back"<<endl;}
        else{cout <<"none"<<endl;}
    }
}
