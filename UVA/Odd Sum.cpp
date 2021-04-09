#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
       int a,b;
       cin >>a>>b;
       int s=0;
       for(int i=a;i<=b;i++){
           if(i%2)s+=i;
       }
       cout <<"Case "<<++cnt<<": "<<s<<endl;
    }
}
