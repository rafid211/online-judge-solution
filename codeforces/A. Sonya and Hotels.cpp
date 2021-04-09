#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];
    int c=0;
    for(int i=0;i<n-1;i++){
        if((a[i]+k)==(a[i+1]-k))c++;
        if((a[i]+k)<(a[i+1]-k))c+=2;
    }
    cout <<c+2<<endl;
    return 0;
}
