#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3],n,suma=0,sumb=0;
    for(int i=0;i<3;i++){cin >>a[i];suma+=a[i];}
    for(int i=0;i<3;i++){cin >>b[i];sumb+=b[i];}

    cin >>n;

    int x= suma/5;
    int sa = (suma==0||(suma%5==0&&suma>=5))?x:++x;
    x= sumb/10;
    int sb = (sumb==0||(sumb%10==0&&sumb>=10))?x:++x;

    if((sa+sb)<=n){puts("YES");}
    else{puts("NO");}

    return 0;
}
