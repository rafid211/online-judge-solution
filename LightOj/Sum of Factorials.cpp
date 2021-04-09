#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll n)
{
    if(n==0)return 1;
    ll f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main()
{

    ll m[22];
    int i=0;
    while(1){
        if(fact(i)>=1e18){break;}
        ll f=fact(i);
        m[i++]=f;
    }

    int t,cnt=0;
    cin >>t;
    while(t--){
        ll n;vector<ll>v;
        cin >>n;
        for(int i=19;i>=0;i--){
            if(m[i]<=n){
                n-=m[i];
                v.push_back(i);
            }
        }
        if(n){printf("Case %d: impossible",++cnt);}
        else{
            sort(v.begin(),v.end());
            int ss=v.size();
            printf("Case %d: ",++cnt);
            for(int i=0;i<ss;i++){
                if(i==ss-1){
                    printf("%d!",v[i]);
                }
                else{printf("%d!+",v[i]);}
            }
        }
        printf("\n");
    }
    return 0;
}
