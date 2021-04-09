#include <iostream>
using namespace std;
#define i64 long long
int main()
{
    i64 n,k,mid;
    cin >>n>>k;
    if(n%2==0){
        mid = n/2;
    }
    else{
        mid=(n/2)+1;
    }
    if(k<=mid){
        cout <<k+(k-1);
    }
    else{
        cout <<2*(k-mid)<<endl;
    }
    return 0;
}
