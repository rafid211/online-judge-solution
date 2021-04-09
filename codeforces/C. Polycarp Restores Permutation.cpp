#include <bits/stdc++.h>
using namespace std;
int a[200005];
int freq[200005];
int main()
{
    int n;
    cin >>n;
    for(int i=1;i<n;i++)cin >>a[i];

    int x=n;a[0]=x;
    int mx=x;
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        mx=max(a[i],mx);
    }
    mx-=x;
    //for(int i=0;i<n;i++)cout << a[i]<<" ";
    //cout <<mx<<endl;
    for(int i=0;i<n;i++){a[i]-=mx;
        if(a[i]<=0 || a[i]>n)return cout << -1<<endl,0;
        freq[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i]>1)return cout << -1<<endl,0;
    }
    for(int i=0;i<n;i++)cout << a[i]<<" ";

}
