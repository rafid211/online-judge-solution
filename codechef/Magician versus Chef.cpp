#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {

        int n,x,s;
        cin >>n>>x>>s;
        int ar[n+1];
        for(int i=1;i<=n;i++)ar[i]=0;
        ar[x]=1;
        while(s--){
            int a,b;
            cin >>a>>b;
            swap(ar[a],ar[b]);
        }
        for(int i=1;i<=n;i++){
            if(ar[i]){cout <<i<<endl;break;};
        }
    }
}
