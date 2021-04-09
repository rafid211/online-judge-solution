#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int rem,s=0;
    while(n){
        rem=n%10;
        n/=10;
        s+=rem;
    }
    return s;
}
int main()
{
    int n;
    cin >>n;
    vector <int>div;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            div.push_back(i);
        }
    }
    int si=div.size(),ans,index;
    for(int i=0;i<si;i++){
        if(i==0){ans=sum(div[i]);index=i;}
        if(sum(div[i])>ans){ans=sum(div[i]);index=i;}
        else if(sum(div[i])==ans){continue;}
    }
    cout <<div[index]<<endl;
}
