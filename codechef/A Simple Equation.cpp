#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n,a,b,c;
        cin >>n>>a>>b>>c;

        ll ans=0;
        for(int i=0;i<=a;i++){
            for(int j=0;j<=b;j++){
                if(i+j<=n){
                    if(i+j+c<=n)ans+=c+1;
                    else ans+= (n-(i+j))+1;
                }
            }
        }
        cout <<ans<<endl;
    }
    return 0;
}
