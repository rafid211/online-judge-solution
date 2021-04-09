#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin >>n>>m;
    int c[n],a[m];
    for(int i=0;i<n;i++)cin >>c[i];
    for(int i=0;i<m;i++)cin >>a[i];

    int i=0,j=0;
    int cnt=0;
    while(j<n){
        if(i<m&&a[i]>=c[j]){i++;j++;cnt++;}
        else{j++;}
    }
    cout <<cnt<<endl;
}
