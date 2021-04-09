#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,a,b;
    cin >>n>>a>>b;
    if(a>b){a+=b;b=a-b;a-=b;}
    for(int i=1;;i++){
        if(n==2){
            return cout <<"Final!"<<endl,0;
        }
        if((a+1)/2==(b+1)/2){
            return cout <<i<<endl,0;
        }
        a++;b++;
        a/=2;b/=2;n/=2;
    }

    return 0;

}
