#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    int x=-99999;
    for(int i=0;i<n;i++){
        cin >>a[i];
        x=max(x,a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(x==a[i])c++;
    }
    cout <<c<<endl;
    return 0;
}
