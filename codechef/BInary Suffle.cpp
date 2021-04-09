#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll a,b;
        cin >>a>>b;
        ll ans;
        if((a&(a-1))==0 && (b&(b-1))==0){
            bitset<64>bitA(a),bitB(b);
            int c=0;
            for(int i=0;i<64;i++){
                if(bitB.test(i))break;
                else c++;
            }
            ans=c;
            //continue;
        }
        else if(a%2 && b%2){
            bitset<64>bitA(a),bitB(b-1);
            if(bitA.count()==bitB.count()){ans=1;}
            else{ans=2;}
        }
        else{
             bitset<64>bitA(a),bitB(b);
             if((b&(b-1))==0){
                int c=0;
                for(int i=63;i>=0;i--){
                    if(bitB.test(i))break;
                    else c++;
                }
             }
             else if(b%2==0){

             }
        }
    }
}
