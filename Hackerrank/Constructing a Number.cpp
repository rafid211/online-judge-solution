#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n,sum=0;
        cin >>n;
        for(int i=0;i<n;i++){
            int a;cin >>a;
            sum+=a;
        }
        if(sum%3){puts("No");}
        else{puts("Yes");}
    }
    return 0;
}
