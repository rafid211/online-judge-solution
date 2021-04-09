#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    int st=0;
    for(int i=0;i<n;i++){cin >>a[i];if(a[i]==1)st++;}

    cout <<st<<endl;
    for(int i=0;i<n;i++){
        if(i!=0&& a[i]==1){
            cout <<a[i-1]<<" ";
        }
    }
    cout <<a[n-1]<<endl;
    return 0;

}
