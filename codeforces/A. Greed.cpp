#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int main()
{
    int n;
    i64 sum=0;
    cin >>n;
    vector <i64> a(n);
    vector <i64> b(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
        sum+=a[i];
    }
    for(int j=0;j<n;j++){
        cin >>b[j];
    }
    sort(b.begin(),b.end());

    if(b[n-1]+b[n-2]>=sum){
        cout <<"YES"<<endl;
    }

    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
