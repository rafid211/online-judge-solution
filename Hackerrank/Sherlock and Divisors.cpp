#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        int sq=sqrt(n),c=0;
        for(int i=1;i<=sq;i++){
            if(n%i==0){
                if((n/i)==i){
                    if(i%2==0){c++;}
                }
                else{
                   if((n/i)%2==0){c++;}
                   if(i%2==0){c++;}
                }
            }
        }
        cout <<c<<endl;
    }
}
