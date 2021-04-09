#include <iostream>
using namespace std;
#define i64 long long
i64 sumOfDigit(i64 a)
{
    i64 sum = 0;
    while(a!=0){
        sum=sum+(a%10);
        a/=10;
    }
    return sum;
}

i64 digit(i64 a)
{
    if(a<10){
        return a;
    }
    else{
        return digit(sumOfDigit(a));
    }
}

i64 ans(i64 a,i64 n)
{
    i64 result = 1;
    while(n){
        if(n%2==1){
            result = result*digit(a);
            result = digit(result);
        }
        a = digit(digit(a)*digit(a));
        n/=2;
    }
    return result;
}
int main()
{
    i64 t;
    i64 a,n;
    cin >>t;
    for(i64 i=0;i<t;i++){
        cin >>a>>n;
        i64 f = ans(a,n);
        cout <<f<<endl;
    }
    return 0;
}
