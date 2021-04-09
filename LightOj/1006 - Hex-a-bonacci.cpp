#include <iostream>
#include <cstdio>
using namespace std;
long long int ara[10000];
long long int a, b, c, d, e, f,sum=0,i;
long long int fn(int n ) {
    ara[0]=a,ara[1]=b,ara[2]=c,ara[3]=d,ara[4]=e,ara[5]=f;
    for(i=6;i<=n;i++){
        ara[i] = ara[i-1]+ara[i-2]+ara[i-3]+ara[i-4]+ara[i-5]+ara[i-6]%10000007;
    }
    sum = ara[n];
    return sum;
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno,fn(n) % 10000007);
    }
    return 0;
}
