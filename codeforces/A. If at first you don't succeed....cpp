#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,ans,p;
    cin >>a>>b>>c>>n;
    if((a-c)<0||(b-c)<0)ans=-1;
    else if(n<=a||n<=b||n<=c)ans=-1;
    else{
       p=(a-c)+(b-c)+c;
        ans = n-p;
    }

    cout <<((ans<=0)?-1:ans)<<endl;

    return 0;
}






