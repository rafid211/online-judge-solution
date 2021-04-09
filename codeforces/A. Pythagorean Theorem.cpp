#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int x=0;
    int a,b,c;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int c=sqrt((i*i)+(j*j));

            if(i<=n&&j<=n&&c<=n &&
               (i*i)+(j*j)==(c*c))x++;
        }
    }

    cout <<x<<endl;
    return 0;
}

