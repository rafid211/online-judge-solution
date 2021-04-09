#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++)cin >>a[i];
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                v.push_back(0);
                for(int k=i;k<=j;k++){
                    v.push_back(a[k]);
                }
                sort(v.begin(),v.end());
                int sz=j-i+1;
                int x;
                if(sz>=k){
                    x=v[k];
                }
                else {
                    int idx=sz%k;
                    if(idx==0){
                        x=v[sz];
                    }
                    else x=v[idx];
                }
                int f=0;
                for(int k=i;k<=j;k++){
                    if(a[k]==x)f++;
                }
                for(int k=i;k<=j;k++){
                    if(a[k]==f)c++;
                }
                v.clear();
            }
        }

        cout <<c<<endl;
    }

}
