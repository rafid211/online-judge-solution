#include <bits/stdc++.h>
using namespace std;
bool p[3002];
int prime[3002];
int main()
{
    int n;
    cin >>n;
    int c=0;
    for (int i=2;i<=n;i++){
        if (!p[i]){
            for(int j=i+i;j<=n;j+=i){
                p[j]=1;prime[j]++;
            }
        }
        if (prime[i]==2){c++;}
    }
    cout <<c<<endl;
}
