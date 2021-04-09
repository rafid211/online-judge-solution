#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >>n;
    int c[n],t[n];
    for(int i=0;i<n;i++)cin >>c[i];

    for(int i=0;i<n;i++)cin >>t[i];
    int min_1=9999999,min_2=9999999,min_3=9999999;
    for(int i=0;i<n;i++){
        if(t[i]==1){
            min_1 = min(min_1,c[i]);
        }
        if(t[i]==2){
            min_2 = min(min_2,c[i]);
        }
        if(t[i]==3){
            min_3 = min(min_3,c[i]);
        }
    }

    ll sum = (min_1+min_2);

    if(sum<=min_3){
        cout <<sum<<endl;
    }
    else{
        cout <<min_3<<endl;
    }
    return 0;
}
