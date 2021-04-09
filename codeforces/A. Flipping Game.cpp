#include <bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
    int n;
    cin >>n;
    int x=0;
    for(int i=0;i<n;i++)cin >>a[i],x+=a[i];

    if(x==n)return cout << n-1<<endl,0;
    int zero=0,one=0,c=0;
    for(int i=0;i<n;i++){
        zero=one=0;
        for(int j=i;j<n;j++){
            if(!a[j])zero++;
            else one++;
            c=max(c,(zero-one));
        }
    }
    c+=x;
    cout <<c<<endl;
}
