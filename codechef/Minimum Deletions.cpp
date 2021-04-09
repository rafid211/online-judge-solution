#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return ((a==0)?b:gcd(b%a,a));
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++)cin >>a[i];

        int s=a[0],c=0;
        for(int i=1;i<n;i++){
            s = gcd(s,a[i]);
            if(s>1)c++;
        }
        //cout <<s<<endl;
        if(s==1){cout <<0<<endl;continue;}
        cout << ((n-c==1)?-1:c)<<endl;
    }
    return 0;
}
