#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,caseno=0,r,c,a;
    cin >>t;
    while(t--){int ans=0;
        cin >>r>>c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin >>a;
                if((i+j)%2!=(r+c)%2){
                   // cout <<"a "<<a<<endl;
                    ans^=a;
                }
            }
        }
        //cout <<ans<<endl;
        cout <<"Case "<<++caseno<<": "<<(ans?"win":"lose")<<endl;
     }
    return 0;
}
