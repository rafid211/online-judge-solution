#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,box[100005];
    cin >>n>>k;
    ll ans;
    for(ll i=0;i<k;i++){
        cin >>box[i];
    }
    ans=n%box[0];
    int index=0;
    for(ll i=0;i<k;i++){
        if((n%box[i])<ans){
            index=i;//cout <<i<<endl;
            ans=n%box[i];
        }
    }
    cout <<index+1<<" "<<(n-ans)/box[index]<<endl;
    return 0;
}
