#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m(int n,int p)
{
    ll x=1;
    if(p==1||n==1)return -1;
    for(int i=1;i<=p;i++){
        x*=n;
        if(x>1e9)return -1;
    }
    return x;

}
int main()
{
    ll x,y;
    cin >>x>>y;
    ll a = m(x,y);
    ll b = m(y,x);
    //cout <<a<<" "<<b<<endl;
    if(x<y){
        if(a!=-1&&b!=-1){
            if(a>b)puts(">");
            else if(a<b)puts("<");
            else puts("=");
        }
        else if(x>1){puts(">");}
        else {puts("<");}
    }
    else if(x>y){
        if(a!=-1&&b!=-1){
            if(a>b)puts(">");
            else if(a<b)puts("<");
            else puts("=");
        }
        else if(y>1){puts("<");}
        else {puts(">");}
    }
    else {puts("=");}
    return 0;
}
