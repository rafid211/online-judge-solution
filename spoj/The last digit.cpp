#include <bits/stdc++.h>
using namespace std;
int bigmod(int a,int p)
{
    if(p==0)return 1;
    int x = bigmod(a,p/2);
    x = ((x%10)*(x%10))%10;
    if(p%2){
        x = (x*a)%10;
    }
    return x;
}
int main()
{
    //fast_io
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",bigmod(a,b));
    }


    return 0;
}







