#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    for(int i=0;i<=c;i++){
        for(int j=0;j<=c;j++){
            int x = i*a+j*b;
            if(x==c)return cout <<"Yes"<<endl,0;
        }
    }
    cout <<"No"<<endl;
}
