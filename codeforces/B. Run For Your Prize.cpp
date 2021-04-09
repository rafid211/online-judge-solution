#include <bits/stdc++.h>
using namespace std;
bool prize[1000005];
int main()
{
    int n;
    cin >>n;
    int a;
    for(int i=0;i<n;i++){cin >>a;prize[a]=1;}
    int x=1,y=1000000,c=0;
    while(1){
        if(n==0)break;
        x++;y--;
        if(prize[x])n--;
        if(prize[y])n--;
        c++;
    }
    cout <<c<<endl;
    return 0;
}
