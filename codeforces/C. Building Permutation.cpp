#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[300005];
int go[300005];
map<int,int>m;
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a[i];
        //if(a[i]>0&&a[i]<=n)go[a[i]]=1;
    }
    sort(a,a+n);
    ll x=0;
    for(int i=0,z=1;i<n,z<=n;){
        if(!go[z]){
            x+=abs(z-a[i]);
            z++;
            i++;
        }
        else z++;
    }
    cout <<x<<endl;
    return 0;
}

