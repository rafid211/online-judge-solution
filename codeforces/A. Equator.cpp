#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){cin >>a[i];sum+=a[i];}

    double h = ceil((double)sum/2.00);
    //cout <<h<<endl;
    sum=0;int i=0;
    for(i=0;i<n;i++){
       // sum+=a[i];
        if(sum>=h) break;
        else{sum+=a[i];}
    }
    cout <<i<<endl;
    return 0;

}
