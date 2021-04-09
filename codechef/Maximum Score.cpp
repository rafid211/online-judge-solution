#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
#define i64 long long
i64 max_value(vector<i64> a,int n)
{
    i64 m = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
   // cout <<m<<endl;
    return m;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t,n;
    int c=0;
    i64 m,value;
    vector <i64> v;
    vector <i64> a;
    cin >>t;
    while(t--){
        bool flag = true;i64 sum=0;
        cin >>n;
        for(int i=0;i<n*n;i++){
            cin>>value;
            a.push_back(value);
            c++;
            if(c==n){
               m = max_value(a,n);
              // cout <<m<<endl;
               v.push_back(m);
               cout <<m<<endl;
               c=0;
               a.clear();
            }
        }
        for(int k=0;k<n-1;k++){
            if(v[k]<v[k+1]){
                sum+=v[k];
            }
            else{
                flag = false;
            }
        }
        if(flag){cout <<sum+v.back()<<endl;}
        else{cout <<-1<<endl;}
    }
    return 0;
}
