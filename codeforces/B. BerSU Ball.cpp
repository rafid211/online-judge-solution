#include <bits/stdc++.h>
using namespace std;
bool na[101],nb[101];
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];
    sort(a,a+n);
    int m;
    cin >>m;
    int b[m];
    for(int i=0;i<m;i++)cin >>b[i];
    sort(b,b+m);
    int c=0;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            if(!na[i]&&!nb[k]){
                if((max(a[i],b[k])-min(a[i],b[k]))<=1){
                    na[i]=1;nb[k]=1;//cout <<a[i]<<" "<<b[k]<<endl;
                    c++;
                }
            }
        }
    }
    cout <<c<<endl;
    return 0;
}
