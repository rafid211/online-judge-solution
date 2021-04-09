#include <bits/stdc++.h>
using namespace std;
vector<bool>v;
int b(int n)
{
    int rem;
    while(n){
       rem=n%2;
       v.push_back(rem);
       n/=2;
    }
    int len=v.size(),c=0;
    for(int i=len-1,j=0;i>=0;i--,j++){
        if(v[i]){
           c+= ceil(pow(2,j));
        }
    }
    v.clear();
    return c;
}
int main()
{
    int n;
    cin >>n;
    b(n);
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
           cout << b(a[i])<<endl;
        }
        else cout <<a[i]<<endl;
    }
    return 0;
}
