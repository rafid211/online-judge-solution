#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int time=0,c=0;
    for(int i=1;i<=n;i++){
        time+=i*5;
        if(time+k<=240){c++;}
    }
    cout <<c<<endl;
    return 0;
}
