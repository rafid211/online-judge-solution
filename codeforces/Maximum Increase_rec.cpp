#include<bits/stdc++.h>
using namespace std;
int a[100005];
int ans=1,c=1;
void f(int i,int n)
{
    if(i==n)return;
    if(a[i]>a[i-1])c++;
    else{c=1;}
    ans= max(ans,c);
    f(i+1,n);
}
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)cin >>a[i];
    f(1,n);
    cout <<ans<<endl;
    return 0;

}
