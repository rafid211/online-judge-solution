#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];
    int p;
    cin >>p;
    int s=0;
    for(int i=0;i<n;i++){
        if(i!=k){
            s+=a[i];
        }
    }
    s/=2;
    if(s==p){cout <<"Bon Appetit"<<endl;}
    else {cout <<p-s<<endl;}
    return 0;
}
