#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int rem;
    while(k){
        rem=n%10;
        if(rem==0){n/=10;k--;}
        else{n--;k--;}
    }
    cout <<n<<endl;
    return 0;
}
