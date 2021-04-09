#include <bits/stdc++.h>
using namespace std;
bool s[200005];
typedef long long ll;

int main()
{
    int n,bat,ac;
    cin >>n>>bat>>ac;

    for(int i=0;i<n;i++)cin >>s[i];

    int x=0;
    int charge=ac,battary=bat;
    for(int i=0;i<n;i++){//x=i+1;
        if(battary<=0&&charge<=0)break;
        x=i+1;
        if(!s[i]){
            if(charge!=0)charge--;
            else if(battary!=0)battary--;

        }
        else{
            if(battary>0&&charge!=ac){
                battary--,charge++;
            }
            else{
                charge--;
            }
        }
    }
    cout <<x<<endl;
}
