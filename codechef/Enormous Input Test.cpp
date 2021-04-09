#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,val;
    cin >>n>>k;
    int c=0;
    while(n--){
        cin >>val;
        if(val%k==0){c++;}
    }
    cout <<c<<endl;
    return 0;
}
