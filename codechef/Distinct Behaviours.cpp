#include <bits//stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;bool a[100005];
    ll ans=0;
    memset(a,0,sizeof(a));
    cin >>n;
    for(int i=0;i<n;i++){
        ll v;
        cin >>v;
        if(a[v]==0){a[v]=1;ans++;}
    }
    cout <<ans<<endl;
    return 0;
}
