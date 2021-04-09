#include <bits/stdc++.h>
using namespace std;
#define mx 1000004
bool prime[mx];
vector<int>v;
void sieve()
{
    int limit = sqrt(mx);
    prime[1] = false;
    for(int i=4;i<=mx;i+=2){
        prime[i] = false;
    }
    for(int i=3;i<=limit;i+=2){
        if(prime[i]==true){
            for(int k=i*i;k<=mx;k+=i*2){
                prime[k]=false;
            }
        }
    }
}
int num(int l,int r)
{
    int c=0;
    for(int i=l;i<=r;i++){
        if(prime[i]){c++;}
    }
    return c;
}
int main()
{
    memset(prime,1,sizeof(prime));
    sieve();
   // cout <<v.size();
    int t;
    cin >>t;
    while(t--){
        int l,r;
        cin >>l>>r;
        int dif=r-l+1;
        int n=num(l,r);
       // cout <<n<<endl;
        cout <<fixed<<setprecision(6)<<(double)n/(double)dif<<endl;
    }
    return 0;
}
