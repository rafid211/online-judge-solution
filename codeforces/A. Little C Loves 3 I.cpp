#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin >>n;
    if(n%3==0){
        int x=n/3;
        if(x%3)cout << x<<" "<<x<<" "<<x<<endl;
        else {
            x-=2;
            cout << x<<" "<<x<<" "<<n-(2*x)<<endl;
        }
    }
    else if((n-2)%3==0){
       cout << 1<<" "<<2<<" "<<n-3<<endl;
    }
    else {
        cout <<1<<" "<<1<<" "<<n-2<<endl;
    }
    return 0;
}
