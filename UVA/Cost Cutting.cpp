#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int k=1;k<=t;k++){int a[3];
        for(int i=0;i<3;i++)cin>>a[i];
        sort(a,a+3);
        cout <<"Case "<<k<<": "<<a[1]<<endl;
    }
    return 0;
}
