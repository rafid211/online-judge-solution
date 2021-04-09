#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for(int test=1;test<=t;test++){
        int k;bool one=1;
        cin >>k;int s,a[101];
        for(int i=0;i<k;i++){
            cin >>a[i];
            if(a[i]>1){one=0;}
        }
        s=a[0];
        for(int i=1;i<k;i++){s^=a[i];}

        cout <<"Case "<<test<<": ";
        if(k==1&&s==1){cout <<"Bob";}
        else if(k==1&&s>1){cout <<"Alice";}
        else if(one&&s==0){cout <<"Alice";}
        else if(one&&s==1){cout <<"Bob";}
        else if(s==0){cout <<"Bob";}
        else if(s!=0){cout <<"Alice";}
        cout <<"\n";
    }
    return 0;
}
