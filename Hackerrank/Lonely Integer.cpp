#include <bits/stdc++.h>
using namespace std;
int d[105];
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int x;cin >>x;
        d[x]++;
    }
    for(int i=0;i<=100;i++){
        if(d[i]==1){
            return cout <<i<<endl,0;
        }
    }
}
