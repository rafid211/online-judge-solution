#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >>n>>k;
        cout <<((k<(n/2))?(2*k+1):(2*n-2*k-2))<<endl;
    }
    return 0;
}
