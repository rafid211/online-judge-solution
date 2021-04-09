#include<bits/stdc++.h>
using namespace std;
int r,c,cnt=0;
//int dp[10][10];
void f(int a,int b)
{
    //cout <<a<<" "<<b<<endl;
    if(a>r||b>c)return;
    if(a==r&&b==c){cnt++;return;}
    f(a+1,b);
    f(a,b+1);
}
int main()
{
    int n;
    cin >>n;
    while(n--){
       // memset(dp,-1,sizeof(dp));
        cin >>r>>c;
        cnt=0;
        f(1,1);
        cout <<cnt<<endl;
    }
    return 0;
}
