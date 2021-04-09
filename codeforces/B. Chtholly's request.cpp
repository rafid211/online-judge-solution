#include <bits/stdc++.h>
using namespace std;
#define i64 long long
i64 zcy(i64 num)
{
    i64 rev=0,n=1,i=num;
    while(num!=0){
        n*=10;
        rev = rev*10+(num%10);
        num/=10;
    }
    return ((i*n)+rev);
}
int main()
{
    i64 k,p,sum=0;
    cin >>k>>p;
    for(i64 i=1;i<=k;i++){
         sum+= zcy(i);
         sum%p;
         //cout <<sum<<endl;
    }
    cout <<sum%p<<endl;
}
