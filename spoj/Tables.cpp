#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s;
    scanf("%d %d %d",&n,&k,&s);
    long long x = k*s;
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);

    sort(a,a+n,greater<int>());
    int c=0;
    for(int i=0;i<n;i++){//cout <<a[i]<<" ";
        c+=a[i];
        if(c>=x){printf("%d\n",i+1);break;}
    }
    return 0;
}
