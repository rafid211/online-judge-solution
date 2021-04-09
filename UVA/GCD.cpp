#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)return 0;
        long long g=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                g+=__gcd(i,j);
            }
        }
        cout <<g<<endl;
    }
}
