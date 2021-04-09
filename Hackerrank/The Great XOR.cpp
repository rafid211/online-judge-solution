#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long n,ans=0,x;
        cin >>n;
        int i=0;
        x=n;
        while(n)
        {
            n/=2;
            i++;
        }
        ans=pow(2,i);
        cout <<ans-x-1<<endl;
    }
    return 0;
}
