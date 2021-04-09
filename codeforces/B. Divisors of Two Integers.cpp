#include <bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i],m[a[i]]++;
    sort(a,a+n);
    int x=a[n-1],y=INT_MIN;

    for(int i=n-1;i>=0;i--){
        if(x%a[i]==0 && m[a[i]])m[a[i]]=0,a[i]=0;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i])y=max(y,a[i]);
    }
    cout <<x<<" "<<y<<endl;


}
