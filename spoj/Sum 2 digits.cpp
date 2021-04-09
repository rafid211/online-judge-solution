#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=1;i<=9;i++){
        for(int k=1;k<=9;k++){
            if(i+k==n){
                cout <<i<<k<<" = "<<i<<" + "<<k<<" = "<<n<<endl;
            }
        }
    }
    if(n<10){
        cout <<n<<0<<" = "<<n<<" + "<<0<<" = "<<n<<endl;
    }
    return 0;
}
