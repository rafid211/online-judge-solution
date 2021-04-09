#include <bits/stdc++.h>
using namespace std;
int d[1000007];
int main()
{
    int n,m;
    cin >>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin >>a[i];
    for(int i=0;i<m;i++)cin >>b[i],d[b[i]]++;

    int c=0;
    for(int i=0;i<n;i++){
         bool ase=0;
        for(int j=0;j<m;j++){
            if(a[i]<=b[j]&&b[j]!=-1){ase=1;b[j]=-1;break;}
        }
        if(!ase){
            c++;
        }
    }
    cout <<c<<endl;
    return 0;
}
