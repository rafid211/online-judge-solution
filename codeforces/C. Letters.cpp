#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 2e5+5;
ll a[MX],b[MX],temp[MX];

ll dnum(int f,int l,ll val)
{
    int mid;
    while(f<=l){
        mid = (f+l)/2;
        if(val==a[mid]){l=mid-1;}
        if(val<a[mid]){l=mid-1;}
        else if(val>a[mid]){f=mid+1;}
    }
    return f;
}
int main()
{
    int n,m;
    cin >>n>>m;
    for(int i=0;i<n;i++){cin >>a[i];temp[i]=a[i];}
    for(int i=0;i<m;i++)cin >>b[i];

    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    ll x;
    for(int i=0;i<m;i++){
        x = dnum(0,n,b[i]);
        cout <<x+1<<" "<<b[i]-a[x]+temp[x]<<endl;
    }
    return 0;

}
