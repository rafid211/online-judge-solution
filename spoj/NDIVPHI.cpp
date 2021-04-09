#include <bits/stdc++.h>
using namespace std;
#define MX 10005;
int id=1;
int solve[MX];
void bigIntMul(int n)
{
    for(int i=0;i<id;i++)solve[i]*=n;
    int carry=0,sum=0;
    for(int i=0;i<id;i++)
    {
         sum=solve[i]+carry;
         solve[i]=sum%10;
         carry=sum/10;
    }
    while(carry)
    {
        solve[id++]=carry%10;
        carry/=10;
    }
}
vector <int>p;
bool isprime(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
void prime()
{
    p.push_back(2);
    for(int i=3;i<120;i++){
        if(isprime(i))p.push_back(i);
    }
}
int main()
{
    prime();
    string s;
    while(cin >> s )
    {
        int n[s.size()]={0};
        for(int i=0;i<s.size();i++){

        }
        id=1;
        solve[0]=1;

    }
}
