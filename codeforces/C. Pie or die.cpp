#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main()
{
    int n,m,k;
    cin >>n>>m>>k;
    pii pie[101];
    for(int i=0;i<k;i++)cin >>pie[i].first>>pie[i].second;

    bool win=0;
    for(int i=0;i<k;i++){
        if(pie[i].first+4>=n || pie[i].second+4>=m){win=1;}
        if(pie[i].first<=4+1||pie[i].second<=4+1){win=1;}

    }
    if(win&&k>0){cout <<"YES"<<endl;}
    else cout <<"NO"<<endl;
    return 0;
}
