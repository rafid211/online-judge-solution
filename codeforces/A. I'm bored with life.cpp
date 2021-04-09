#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout << __gcd(2,6);
    int a,b;
    cin >>a>>b;
    int m=min(a,b);
    long long ans=1;
    for(int i=1;i<=m;i++){
        ans*=i;
    }
    cout <<ans<<endl;
    return 0;
}
