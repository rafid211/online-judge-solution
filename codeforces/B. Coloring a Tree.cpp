#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n+1],col[n+1];
    for(int i=2;i<=n;i++){
        cin >>a[i];
    }
    a[1]=0;

    for(int i=1;i<=n;i++)cin >>col[i];

    int x=0;
    for(int i=1;i<=n;i++){
        if(col[a[i]]!=col[i])x++;
    }
    cout <<x<<endl;
}
