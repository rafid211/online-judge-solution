#include <iostream>
using namespace std;
int main()
{
    int n,res;
    cin >>n;
    int t = n*(n+1)/2;
    if(n==1){
        res = 1;
    }
    else if(n==2){
        res = 2;
    }
    else if(n%2==0){
       res = (n*(n+2))/4;
    }
    else{
        res = t-((n-1)*(n+1))/4;
    }
    cout <<res<<endl;
    return 0;
}
