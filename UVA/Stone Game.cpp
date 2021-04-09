#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0){int a[n],res;
        for(int i=0;i<n;i++){
            cin >>a[i];
            //cout <<res<<endl;
        }
        res=a[0];
        for(int i=1;i<n;i++){res^=a[i];}
        if(res==0){cout <<"No"<<endl;}
        else{cout <<"Yes"<<endl;}
    }
    return 0;
}
