#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n],b[n];
    int m;
    cin >>m;
    for(int i=0;i<n;i++)cin >>a[i];
    for(int i=0;i<n;i++)cin >>b[i];
    double x=m;
    for(int i=0;i<n;i++){
        if(a[i]<=1||b[i]<=1){
            return cout <<-1<<endl,0;
        }
        x+=(double)x/(double)(a[i]-1);
        x+=(double)x/(double)(b[i]-1);
    }
    double c=0;
    x-=m;
    cout <<fixed<<setprecision(9)<<x<<endl;
    return 0;
}
