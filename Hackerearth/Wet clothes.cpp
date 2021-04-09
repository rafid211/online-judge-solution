#include <bits/stdc++.h>
using namespace std;
int t[107],c[107];
int main()
{
    int n,m,g;
    cin >>n>>m>>g;

    for(int i=0;i<n;i++)cin >>t[i];
    for(int i=0;i<m;i++)cin >>c[i];

    vector<int>dif;
    for(int i=0;i<n-1;i++){
        int x=t[i+1]-t[i];
        dif.push_back(x);
    }
    sort(dif.begin(),dif.end(),greater<int>());
    int ans=0;
    for(int i=0,k=g;i<dif.size()&&k>0;i++,k--){
        int x=dif[i];
        for(int j=0;j<m;j++){
            if(c[j]!=-1 && x>=c[j]){
                //cout << c[j]<<endl;
                c[j]=-1;
                ans++;
            }
        }
    }
    cout << ans<<endl;
    return 0;


}
