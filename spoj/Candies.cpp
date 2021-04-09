#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    int cnt=0;
    while(t--){
        int ans=-1;
        int n;
        cin >>n;
        if(n<8){
            cout << "Case "<<++cnt<<": "<<ans<<endl;
            continue;
        }
        for(int i=1;i<=n/3;i++){
            int x=i*3;
            int rem=n-x; //cout << x<<" "<<rem<<endl;
            if(rem && rem%5==0){
                ans=x;
            }
        }
        cout << "Case "<<++cnt<<": "<<ans<<endl;

    }
}
