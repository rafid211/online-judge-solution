#include <bits/stdc++.h>
using namespace std;
int a[1000005],d[1000005];
int main()
{
    int n,x;
    cin >>n>>x;

    for(int i=0;i<n;i++)cin >>a[i],d[a[i]]++;

    for(int i=1;i<100005;i++){
        if(d[i]>1){
            return cout << 0<<endl,0;
        }
    }
    for(int i=0;i<n;i++){
        if(d[a[i]]&&d[a[i]&x]&&(a[i]!=(a[i]&x))){
            cout <<1<<endl;
            return 0;
        }
    }
    memset(d,0,sizeof(d));
    for(int i=0;i<n;i++){
        d[a[i]&x]++;
        if(d[a[i]&x]>1){
            cout << 2<<endl;
            return 0;
        }
    }
    cout << -1<<endl;
    return 0;

}
