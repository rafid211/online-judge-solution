#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int n=a+b;
    if(a<b&&(b-a)>=2){puts("NO");}
    else if(a>b&&(a-b)>=2){puts("No");}
    else if(a==0&&b==0){puts("NO");}
    else{puts("YES");}

    return 0;
}
