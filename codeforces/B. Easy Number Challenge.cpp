#include <bits/stdc++.h>
using namespace std;
int nod(int n)
{
    int sq=sqrt(n);
    int c=0;
    for(int i=1;i<=sq;i++){
        if(n%i==0){
            int x=n/i;
            if(x==i)c++;
            else c+=2;
        }
    }
    return c;
}
int ans=0;
int mod=1073741824;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                int x=i*j*k;
                ans=((ans%mod)+(nod(x))%mod)%mod;
            }
        }
    }
    cout <<ans%mod<<endl;
    return 0;
}

