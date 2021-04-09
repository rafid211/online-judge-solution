#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;

    int x=min(k-1,n-k);

    cout << (n*3)+x<<endl;
}
