#include <bits/stdc++.h>
using namespace std;
bool b = false;
bool check(int a[],int n,int sum)
{
    int arrSum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                arrSum = a[i]+a[j]+a[k];
                if(arrSum*2==sum){
                    b = true;
                }
            }
        }
    }
    return b;
}
int main()
{
    int a[6],n,sum=0;
    for(int i=0;i<6;i++){
        cin >>a[i];
    }
    for(int i=0;i<6;i++){
        sum+=a[i];
    }
    if(check(a,6,sum)==true){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
