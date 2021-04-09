#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll a[],ll n,ll h,ll avg)
{
    ll t=0,v;
    for(ll i=n-1;i>=0;i--){
        if(a[i]<=avg){t++;}
        else{
           if(a[i]%avg==0){
              v=a[i]/avg;
              t+=v;
           }
           else{
             t++;
             v=a[i]/avg;
             t+=v;
           }
        }
        if(t>h)break;

    }
    if(t<=h){return true;}
    else{return false;}
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >>t;
    while(t--){
        ll n,sum=0,h,a[100004],mxv=INT_MIN,avg;
        cin >>n>>h;
        for(int i=0;i<n;i++){
            cin >>a[i];
            sum+=a[i];
            mxv=max(mxv,a[i]);
        }
        avg=sum/h;
        mxv=max(mxv,avg);
        //cout <<mxv<<endl;
        ll f=1,l=mxv,mid;
        while(f<=l){
            mid=(f+l)/2;
            bool ok=check(a,n,h,mid);
            if(ok){l=mid-1;}
            else{f=mid+1;}
        }
        //cout <<f<<" "<<l<<" "<<mid<<endl;
        cout <<f<<endl;
    }
    return 0;
}
