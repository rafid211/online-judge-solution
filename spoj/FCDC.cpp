#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);


    long long x=1,y=1;
    int c=0;
    for(long long i=1;i<=10000000;i++){
        x=((x%a)*(i%a))%a;
        y=((y%b)*(i%b))%b;
        if(x==0 && y==0)break;
        if(x==0 && y!=0)c++;
    }
    cout <<c<<endl;
}
