#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
   // vector<pair<int,int> >v;
    cin >>n>>k;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int f,t;
        cin >>f>>t;
        if(t>k){ans=max(ans,f-(t-k));}
        else{ans=max(ans,f);}
    }
    cout <<ans<<endl;
    return 0;

}
