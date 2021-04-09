#include <bits/stdc++.h>
using namespace std;
#define i64 long long
vector <i64> v;
vector <i64> d;

void number(i64 n)
{
    i64 i=0,k=1,bnum=0;
    while(bnum < n){
         bnum = ((pow(2,k))-1)*(pow(2,k-1));
       // cout <<bnum<<endl;
        d.push_back(bnum);
        i++;
        k++;
    }
    for(i64 i=0;i<d.size();i++){
        if(n%d[i]==0){
           v.push_back(d[i]);
        }
    }
    cout <<v.back()<<endl;
}
int main()
{
    i64 n;
    cin >>n;
    //divisor(sqrt(n),n);
    number(n);
    return 0;
}
