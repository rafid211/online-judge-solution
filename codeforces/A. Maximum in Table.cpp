#include <bits/stdc++.h>
using namespace std;
int f(int i,int j)
{
    if(i==1||j==1)return 1;

    else return f(i-1,j)+f(i,j-1);
}
int main()
{
    int n,a;
    cin >>n;
    int ans=f(n,n);
    cout <<ans;
    return 0;
}
