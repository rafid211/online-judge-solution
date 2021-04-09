#include <bits/stdc++.h>
using namespace std;
int f(int x,int n,int i)
{
    //cout <<x<<" "<<i<<endl;
    int p=pow(i,n);
    if(p<x){
        return f(x,n,i+1)+f(x-p,n,i+1);
    }
    else if(p==x)return 1;
    else return 0;
}
int main()
{
    int x,n;
    cin >>x>>n;
    cout << f(x,n,1)<<endl;

}
