#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int k=i;k<=n;k++){
            if(i*k<=n)c++;
        }
    }
    cout <<c<<endl;
    return 0;
}
