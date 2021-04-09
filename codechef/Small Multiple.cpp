#include <bits/stdc++.h>
using namespace std;
#define i64 unsigned long long
#define limit 10000
vector <i64> v;
i64 sumOfDigit(i64 num){
    i64 digit=0,sum=0;
    while(num > 0){
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    return sum;
}

void m(int k)
{
    for(int i=2;i<=limit;i++){
        i64 mul=k*i;
        v.push_back(sumOfDigit(mul));
    }
}
int main()
{
    int k;
    cin >>k;
    m(k);
    sort(v.begin(), v.end());
    cout <<v[0]<<endl;
}
