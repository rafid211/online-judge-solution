#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int i=1,c=0,prev=0,x=0,y;
    while(1)
    {
        c+=(i*(i+1))/2;
        x=c+((i+1)*(i+1+1))/2;
        if(n>=c&&n<=x){
            if(x==n){i++;break;}
            break;
        }
        i++;

    }
    cout <<i<<endl;
}
