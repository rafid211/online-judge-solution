#include <bits/stdc++.h>
using namespace std;
#define out(x) cout <<x<<endl
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];
    int id=n/k;id++;
    int c=0,i=0;
    bool ok=1;
    while(ok){ok=0;
        int mx=INT_MIN,p=k,cnt=0;
        while(i<(i+p)){
            mx=max(a[i],mx);cnt++;
        }

    }
    cout <<c<<endl;
}
