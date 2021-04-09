#include <bits/stdc++.h>
using namespace std;
int dig(int n)
{
    int rem,ans=0;
    while(n)
    {
       rem=n%10;
       n/=10;
       ans+=rem;
    }
    if(ans<10)return ans;
    else {return dig(ans);}
}
int super(string s,int k)
{
    int len=s.size();
    int n=0,c=0;
    //int ans=0;
    for(int i=0;i<len;i++){
        n=(s[i]-48)*k;
        c+=dig(n);
        c=dig(c);
    }
    return c;
}
int main()
{
    string s;
    int k;
    cin >>s>>k;
    cout <<super(s,k)<<endl;
    return 0;
}
