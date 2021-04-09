#include <bits/stdc++.h>
using namespace std;
int a[20],t,n;
bool ok;
int f(int id,int sum)
{
    if(id>=n){
        if(sum==t)return 1;
        else return 0;
    }
    int p1=0,p2=0;
    if(sum+a[id]<=t){
       p1=f(id+1,sum+a[id]);
    }
    p2=f(id+1,a[id]);

    return p1+p2;
}
int main()
{
    while(scanf("%d %d",&t,&n)&&n!=0){
        for(int i=0;i<n;i++)cin >>a[i];
        cout <<f(0,0)<<endl;
    }
}
