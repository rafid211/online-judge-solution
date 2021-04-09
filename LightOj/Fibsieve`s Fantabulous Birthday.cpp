#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        ll n;
        ll row,col;
        cin >>n;
        ll sq = ceil(sqrt(n));
        ll x = sq*sq-n;
        if(x<sq){col=sq;row=x+1;}
        else{row=sq;col=sq*2-x-1;}

        if(sq%2){swap(col,row);}
        cout <<"Case "<<++cnt<<": "<<col<<" "<<row<<endl;
    }
    return 0;
}
