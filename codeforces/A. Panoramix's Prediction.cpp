#include <bits/stdc++.h>
using namespace std;
int a[100];

bool isp(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int x=0;
    a[x++]=2;
    for(int i=3;i<=60;i++){
        if(isp(i))a[x++]=i;
    }
    int n,m;
    cin >>n>>m;

    for(int i=0;i<x;i++){//cout <<a[i]<<" ";
        if(a[i]==n && a[i+1]==m){cout <<"YES"<<endl;return 0;}
    }
    cout <<"NO"<<endl;
}
