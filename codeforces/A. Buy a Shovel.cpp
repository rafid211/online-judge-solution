#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin >>k>>r;
    int c=0,rem=0,i=1,temp;
    while(rem!=r){
        temp=k*i;
        rem=temp%10;
        c++;i++;
        if(rem==0)break;
       //1 cout <<rem<<endl;
    }
    cout <<c<<endl;
    return 0;
}
