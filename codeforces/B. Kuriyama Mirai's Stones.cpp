#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cost[100005];
ll temp[100005];
int main()
{
    int n;
    cin >>n;
    for(int i=1;i<=n;i++)cin >>cost[i],temp[i]=cost[i];

    sort(temp,temp+n+1);
    for(int i=1;i<=n;i++){
        cost[i]+=cost[i-1];
        temp[i]+=temp[i-1];
    }

    int m;
    cin >>m;
    while(m--){
        int a,i,j;
        cin >>a>>i>>j;
        if(a==1){
            cout <<cost[j]-cost[i-1]<<endl;
        }
        else cout <<temp[j]-temp[i-1]<<endl;
    }

    return 0;
}
