#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    string s="";
    int x=n;
    while(n)
    {
        s+= ((n%2)+'0');
        n>>=1;
    }
    reverse(s.begin(),s.end());
    cout <<x<<" "<<s<<endl;
}
int main()
{
    int n;
    cin >>n;
    for(int i=n;i<=2*n;i++){
        f(i);
    }
}
