#include <bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n/2;i++){
        cin >>a[i];
    }
    sort(a,a+(n/2));
    int x=0,y=0,c=0;
    for(int i=0;i<n/2;i++){
        x+=abs(a[i]-(i*2+1));
        y+=abs(a[i]-(i*2+2));
    }

    cout <<min(x,y)<<endl;
    return 0;
}
