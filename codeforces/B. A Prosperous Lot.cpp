#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    int k;
    cin >>k;
    char one='6',two='8';
    string ans="";
    int i=0;
    while(k){
        if(k%2){
            ans.pb(one);
            k--;
        }
        else{
            ans.pb(two);
            k-=2;
        }
    }
    if(ans.size()>18){ans="-1";}
    cout <<ans<<endl;
    return 0;
}
