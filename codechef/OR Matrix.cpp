#include <bits/stdc++.h>
using namespace std;
string a[1005];
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,m;
        cin >>n>>m;;
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int k=0;k<m;k++){
                if(a[i][k]=='0')c++;
            }
        }
        if(c==n*m){cout <<-1<<endl;continue;}
        vector<int>index(m,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[j][i]=='1'){index[i]=1;}
            }
        }

        int ans[n][m];
        memset(ans,0,sizeof(ans));
        for(int i=0;i<n;i++){bool ok=0;
            for(int k=0;k<m;k++){
                if(a[i][k]=='1'){
                    ans[i][k]=0;continue;
                }
                if(a[i].find('1')!=-1){
                    ans[i][k]=1;ok=1;continue;
                }
                if(index[k]==1){
                    ans[i][k]=1;ok=1;continue;
                }
                else{
                    ans[i][k]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int k=0;k<m;k++){
                cout <<ans[i][k]<<" ";
            }
            cout <<endl;
        }
    }
    return 0;
}
