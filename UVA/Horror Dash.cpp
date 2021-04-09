#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int a;cin >>a;
            ans=max(ans,a);
        }
        cout <<"Case "<<++cnt<<": "<<ans<<endl;
    }
    return 0;
}
