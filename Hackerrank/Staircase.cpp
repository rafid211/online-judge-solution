#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int k=n-1;
    for(int i=1;i<=n;i++,k--){
        for(int j=1;j<=n;j++){
            if(j<=k){cout <<" ";}
            else{cout <<"#";}
        }
        cout <<endl;
    }

    return 0;
}
