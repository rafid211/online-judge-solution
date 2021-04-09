#include <bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
    int n;
    cin >>n;
    if(n&1)return cout <<-1<<endl,0;

    for(int i=1;i<=n;i++)a[i]=i;

    for(int i=1;i<=n;i+=2){
        swap(a[i],a[i+1]);
    }
    for(int i=1;i<=n;i++)cout <<a[i]<<" ";

}
