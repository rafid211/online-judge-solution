#include <bits/stdc++.h>
using namespace std;
int f(int n,int m)
{
    if(n==m)return 0;
    if(m%n)return -1;
    m/=n;
    int c=0;
    while(m%2==0)m/=2,c++;
    while(m%3==0)m/=3,c++;
    if(m==1)return c;
    else return -1;
}
int main()
{
    int n,m;
    cin >>n>> m;
    cout <<f(n,m);

}
