#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s;
    cin >>a>>b>>s;
    a=abs(a);b=abs(b);
    if((a+b)%2){
        if(s>=(a+b)&&s%2){puts("Yes");}
        else{puts("No");}
    }
    else if((a+b)%2==0){
        if(s>=(a+b)&&s%2==0){puts("Yes");}
        else{puts("No");}
    }
    else{
        puts("No");
    }
    return 0;
}
