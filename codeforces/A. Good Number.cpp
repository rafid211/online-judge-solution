#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin >>n>>k;
    string s[n];

    for(int i=0;i<n;i++){
        cin >>s[i];
    }
    bool ok=1,num[k+1];
    for(int i=0;i<=k;i++)num[i]=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].size();j++){
            int p = (int)(s[i][j]-'0');
            num[p]=1;
        }
        for(int x=0;x<=k;x++){
             if(num[x]==0){ok=0;break;}
        }
        if(ok){c++;}
        ok=1;
        for(int i=0;i<=k;i++)num[i]=0;
    }
    cout <<c<<endl;
    return 0;
}
