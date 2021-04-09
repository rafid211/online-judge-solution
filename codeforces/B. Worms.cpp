#include <bits/stdc++.h>
using namespace std;
int a[100002],b[100002],sum=0;
int pos(int value,int n)
{
    int mid,l=0,r=n-1;
    while(l<r){
        mid=(l+r)/2;
        //cout <<sum<<endl;
        if(a[mid]<value){l=mid+1;}
        else{r=mid;}
    }
    return l;
}
int main()
{
    int n,m;
    cin >>n;

    for(int i=0;i<n;i++)cin>>a[i];

    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    cin >>m;

    for(int i=0;i<m;i++)cin >>b[i];
    int x;
    for(int i=0;i<m;i++){
        x=b[i];//sum=0;
        cout <<pos(x,n)+1<<endl;
    }
    return 0;
}
