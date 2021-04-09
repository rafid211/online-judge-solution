#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
int f(int a,string s)
{
    int x=0;
    for(int i=0;i<s.size();i++){
        x=((x*10)+s[i]-48)%a;
    }
    return x;
}
int main()
{
    //fast_io
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        string b;
        cin >>b;
        if(a==0){
            cout <<b<<endl;
        }
        else if(b=="0"){
            printf("%d\n",a);
        }
        else{
            int bb = f(a,b);
            printf("%d\n",gcd(a,bb));
        }
    }
    return 0;
}







