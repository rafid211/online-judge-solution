#include <bits/stdc++.h>
using namespace std;
bool p[1000005];
const int mx=1000000;
vector<int>prime;
void sieve()
{
    for(int i=4;i<=mx;i+=2){
        p[i]=1;
    }
    int sq=sqrt(mx);
    for(int i=3;i<=sq;i+=2){
        if(p[i]==0){
            for(int k=i*i;k<=mx;k+=i*2){
                p[k]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<mx;i+=2){
        if(!p[i])prime.push_back(i);
    }
}
int sum(int n)
{
    int c=0;
    int r;
    while(n){
        r=n%10;
        c+=r;
        n/=10;
    }
    return c;
}
int main()
{
    sieve();
    int n;
    cin >>n;
    int t=sum(n);
    int go=0;
    for(int i=0;i<prime.size();i++){//cout <<prime[i]<<endl;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];go+=sum(prime[i]);
            }
        }
    }
    cout <<((go==t)?1:0)<<endl;
    return 0;

}
