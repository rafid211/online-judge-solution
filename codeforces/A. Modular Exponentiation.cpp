#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
//long long bigmod ( long long a, long long p, long long m )
//{
//    long long res = 1;
//    long long x = a;
//
//    while ( p )
//    {
//        if ( p & 1 ) //p is odd
//        {
//            res = ( res * x ) % m;
//        }
//        x = ( x * x ) % m;
//        p = p >> 1;
//    }
//
//    return res;
//}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    long long int n,m;
    scanf("%lld %lld",&n,&m);
//
//    long long int mod= bigmod(2,n,m);
//    cout <<mod<<endl;

    long long int p = pow(2,n);
    long long int mod = m%p;
    printf("%lld\n",mod);
    return 0;
}


