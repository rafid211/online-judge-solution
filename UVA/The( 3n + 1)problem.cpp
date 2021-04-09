#include <iostream>
#include <cstdio>
#include <algorithm>
#define i64 long long
using namespace std;

int main ()
{
    int i, j;

    while(scanf("%d %d",&i,&j)!=EOF){
        int t1 = i;
        int t2= j;
        if(i>j) {
            swap (i, j);
        }
        i64 ans = 0;
        i64 cycle;
        while(i<=j ){
            int n = i;
            cycle= 1;

            while(n!=1 ){
                if(n%2==0){
                    n/=2;
                }
                else{
                    n=3*n+1;
                }
                cycle++;
            }

            if (ans<cycle)
                ans=cycle;

            i++;
        }

        printf ("%d %d %lld\n", t1, t2,ans);
    }

    return 0;
}
