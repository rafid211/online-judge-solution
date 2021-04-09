#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ll;
vector <ll>v;
#define mv 100000
bool p[mv];
void seive()
{
    //for(int i=1;i<=1000;i+=2)p[i]=0;
    for(int i=3;i<=sqrt(mv);i+=2){
        if(p[i]==0){
            for(int k=i*i;k<=mv;k+=i*2){
                p[k]=1;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=mv;i+=2){
        if(p[i]==0){v.push_back(i);}
    }
}
int main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);
    seive();
    ll q;
    cin >>q;
    while(q--){
       ll n;
       cin >>n;
       ll sum=1,i=0,c=0;
        while(sum){
            if((sum*v[i])>n)break;
            sum*=v[i];c++;//cout <<sum<<endl;
            i++;
        }
        cout <<c<<endl;
    }
    return 0;
}

