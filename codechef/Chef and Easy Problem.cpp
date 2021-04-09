#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout <<INT_MAX<<endl;
    int a[10];
    for(int i=0;i<3;i++){
        cin >>a[i];
    }
    for(int i=0;i<3;i++){
        cout << (a[i]^INT_MAX)<<endl;
    }
}
