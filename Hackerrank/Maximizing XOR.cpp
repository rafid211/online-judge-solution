#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int mx=INT_MIN;
    for(int i=a;i<=b;i++){
        for(int j=i;j<=b;j++){
            mx=max(mx,i^j);
        }
    }
    cout <<mx<<endl;
    return 0;
}
