#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];
    int i=0,j=n-1,c1=0,c2=0,p=0;
    bool ok=1,ok2=1;
//    while(ok||ok2){
//        if(i==j){p++;break;}
//        if(a[i]<=k){c1++;i++;}
//        else if(a[i]>k){ok=0;}
//
//        if(a[j]<=k){c2++;j--;}
//        else if(a[j]>k){ok2=0;}
//    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)c1++;
        else{break;}
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]<=k)c2++;
        else{break;}
    }
    if(c1==n||c2==n)cout <<n<<endl;
    else {cout <<c1+c2<<endl;}
    //cout <<c1<<" "<<c2<<endl;
    return 0;
}
