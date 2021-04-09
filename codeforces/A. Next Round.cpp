#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],n,k,c = 0;
    cin >>n>>k;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            if(a[i]>=a[k-1]){
                c++;
            }
        }
    }
    cout <<c<<endl;
}
