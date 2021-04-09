#include <bits/stdc++.h>
using namespace std;
int f(int n,int k)
{
    return ((n==1)?1:((f(n-1,k)+k-1)%n+1));
}
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        int n,k;
        cin >>n>>k;
        int ans = f(n,k);
        cout <<"Case "<<++cnt<<": "<<ans<<endl;
    }
    return 0;
}
