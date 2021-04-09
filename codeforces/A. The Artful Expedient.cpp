#include <bits/stdc++.h>
using namespace std;
bool a[2777777];
int main()
{
    int n;
    cin >>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)cin >>x[i],a[x[i]]=1;
    for(int i=0;i<n;i++)cin >>y[i],a[y[i]]=1;

    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int v=x[i]^y[j];
           // cout <<v<<endl;
            if(a[v])c++;
        }
    }
    cout <<((c&1)?"Koyomi":"Karen")<<endl;
    return 0;
}
