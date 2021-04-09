#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >>n;
    vector<ll>s(n),c(n);

    for(int i=0;i<n;i++)cin >>s[i];
    for(int i=0;i<n;i++)cin >>c[i];
    ll ans=INT_MAX;
    for(int i=1;i<n-1;i++){
        ll a=INT_MAX,b=INT_MAX;
        for(int j=0;j<i;j++){
            if(s[i]>s[j])a=min(a,c[j]);
        }
        for(int j=i+1;j<n;j++){
            if(s[i]<s[j])b=min(b,c[j]);
        }
        ans=min(ans,a+b+c[i]);
    }
    cout <<((ans==INT_MAX)?-1:ans)<<endl;
    return 0;
}
