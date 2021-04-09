#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=-1)
    {
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)scanf("%d",&a[i]),sum+=a[i];

        if(sum%n){
            printf("-1\n");
            continue;
        }
        int x = sum/n;

        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]<x)c+=x-a[i];
        }
        printf("%d\n",c);
    }
    return 0;
}
