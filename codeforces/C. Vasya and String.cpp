#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    string s;
    cin >>s;
    int a=0,b=0,ans=INT_MIN,x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a')a++;
        else b++;

        if(min(a,b)>k){//cout <<i<<endl;
           if(s[x]=='a')a--;
           else b--;
           x++;
        }
        else ans=max(ans,a+b);
    }
    cout <<ans<<endl;

}
