#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin >>a[i];
        for(int i=0;i<n;i++)cin >>b[i];
        sort(a,a+n,greater<int>());
        sort(b,b+n,greater<int>());
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=a[i]*b[i];
        }
        cout <<c<<endl;
    }
}
