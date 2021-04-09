#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        cin >>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    int mnI,mxI;
    for(int i=0;i<n;i++){
        if(mx==a[i]){mxI=i;}
        if(mn==a[i]){mnI=i;}
    }
    int ans;
    if(mnI>mxI){
       ans=max(mnI,n-1-mxI);
    }
    else{
        ans=max(mxI,n-1-mnI);
    }
    cout <<ans<<endl;
    return 0;

}
