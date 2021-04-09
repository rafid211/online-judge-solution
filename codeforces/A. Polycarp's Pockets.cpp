#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int x;cin >>x;
        a[x]++;
    }
    sort(a,a+105,greater<int>());
    cout << a[0]<<endl;
    return 0;
}
