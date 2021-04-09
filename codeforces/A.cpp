#include <bits/stdc++.h>
using namespace std;
bool d[101];
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++){cin >>a[i];d[a[i]]=1;}

    vector<int>v;
    for(int i=0;i<n;i++){
        if(d[a[i]]){
           v.push_back(i+1);
           d[a[i]]=0;
        }
    }
    if(v.size()>=k){
        puts("YES");
        for(int i=0;i<k;i++)cout <<v[i]<<" ";
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;

}
