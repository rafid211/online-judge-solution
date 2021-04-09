#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void cal(int n)
{
    int sq=sqrt(n);
    ll ans=0;
    for(int i=1;i<=sq;i++){
        ans+=(n/i);
    }
    ans*=2;
    ans-=(sq*sq);

    printf("%lld\n",ans);
}
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("Case %d: ",++cnt);
        cal(n);
    }

}
