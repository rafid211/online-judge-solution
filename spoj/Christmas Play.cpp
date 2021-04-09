#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,k;
        cin >>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin >>a[i];
        sort(a,a+n);

        int ans=a[k-1]-a[0];
        for(int i=0;i+k-1<n;i++){
            int x = a[i+k-1]-a[i];
            ans=min(x,ans);
        }
        cout <<ans<<endl;

    }
    return 0;
}
