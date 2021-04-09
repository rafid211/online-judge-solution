#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string s="Stan wins.",o="Ollie wins.";
    ll n,i=1;
    //cin >>n;
    bool a=1,b=0;
    vector<ll>v;
    while(scanf("%lld",&n)==1){
    while(n>=i){
        if(a){i*=9;v.push_back(i);a=0;b=1;}
        else if(b){i*=2;v.push_back(i);a=1;b=0;}
        //cout <<i<<endl;
    }
    int si=v.size();
    for(int i=0;i<si;i++){
        if(v[i]>=n){//cout<<v[i]<<endl;
            if(i%2==0){cout <<s<<endl;}
            else {cout <<o<<endl;}
            break;
        }
    }
    }
    return 0;
}
