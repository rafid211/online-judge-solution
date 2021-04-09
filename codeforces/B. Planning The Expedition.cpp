#include <bits/stdc++.h>
using namespace std;
int d[102];
int main()
{
    int n,m;
    cin >>n>>m;
    int a[m];
    for(int i=0;i<m;i++)cin >>a[i],d[a[i]]++;
    vector<int>v;
    for(int i=0;i<102;i++)if(d[i])v.push_back(d[i]);
    int f=0,l=m+1,mid;
    while(f<l-1){
        mid=(f+l)/2;
        bool ok=0;
        int r=0;
        for(int i=0;i<v.size();i++){
            r+=v[i]/mid;
        }//cout <<r<<endl;
        ok=(r>=n);
        if(!ok){l=mid;}
        else{f=mid;}
    }
    cout <<f<<endl;
    return 0;

}
