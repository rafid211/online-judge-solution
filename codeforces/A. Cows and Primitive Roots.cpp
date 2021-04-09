#include <bits/stdc++.h>
using namespace std;
//bool prime(int n)
//{
//    for(int i=2;i<=sqrt(n);i++){
//        if(n%i==0)return 0;
//    }
//    return 1;
//}

int phi(int n) {
    int ans = n;
    for (int i=2;i*i<=n;i++) {
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ans-=(ans/i);
        }
    }
    if(n > 1)
        ans-=(ans/n);
    return ans;
}
int main()
{
    int p;
    cin >>p;
    cout << phi(p-1)<<endl;
}
