#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n,p,q;
        scanf("%d %d %d",&n,&p,&q);
        int dim[n];
        for(int i=0;i<n;i++)cin >>dim[i];

         for(int i=1;i<n;i++){
            dim[i]=dim[i]+dim[i-1];
         }
         int c=0;
         for(int i=0;i<n;i++){
            if(dim[i]<=q)c++;
            if(c==p)break;
         }
         cout <<"Case "<<++cnt<<": "<<c<<endl;
    }
    return 0;
}
