#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        long long n;
        scanf("%lld",&n);
        long long a,sum=0,x=n;
        for(int i=0;i<x;i++)scanf("%lld",&a),sum+=(a%n);

        cout <<((sum%n)?"NO":"YES")<<endl;
    }
    return 0;
}
