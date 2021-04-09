#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,col,row;
    cin >>n>>m>>a;
    if(n%a==0){
        col = n/a;
    }
    else{
        col = (n/a);
        col++;
    }
    if(m%a==0){
        row = m/a;
    }
    else{
        row = m/a;
        row++;
    }
    cout <<col*row<<endl;
    return 0;
}
