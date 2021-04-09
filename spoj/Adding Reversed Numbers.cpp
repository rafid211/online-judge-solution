#include <iostream>
using namespace std;
int reverseNum(int n)
{
    int rem=0,rev=0;
    while(n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    return rev;
}
int main()
{
    int t,a,b,sum=0;;
    cin >>t;
    for(int i=0;i<t;i++){
        cin >>a>>b;
        sum = reverseNum(a)+reverseNum(b);
        cout <<reverseNum(sum)<<endl;;
    }
    return 0;
}
