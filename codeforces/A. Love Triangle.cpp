#include<iostream>
using namespace std;
int a[50005];
int main()
{
    int n;
    cin >>n;
    for(int i=1;i<=n;i++)cin >>a[i];

    for(int i=1;i<=n;i++){
        if(a[a[a[i]]]==i){return cout <<"YES"<<endl,0;}
    }
    cout <<"NO"<<endl;
    return 0;
}
