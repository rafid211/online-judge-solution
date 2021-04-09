#include <iostream>
#include <cstdio>
using namespace std;
#define i64 long long
int main()
{
    i64 n,sum=0;
    while(scanf("%lld",&n)!=0){
        if(n==0)break;
        for(int i=1;i<=n;i++){
           sum+=i*i;
        }
        cout <<sum<<endl;
        sum=0;
    }
    return 0;

}
