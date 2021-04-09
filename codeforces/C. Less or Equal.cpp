#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];
    sort(a,a+n);
    int x=a[k-1];
    if(k!=0&&x<=a[k-1]&&a[k-1]!=a[k]){
        cout <<x<<endl;
    }
    else if(k==0&&a[0]-1!=0){
        cout <<a[0]-1<<endl;
    }
    else{
        cout <<-1<<endl;
    }
    return 0;
}
