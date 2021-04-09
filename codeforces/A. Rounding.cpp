#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,mod;
    cin >>n;
    if(n==5){
        cout <<0<<endl;
    }
    else {
        mod  = n%10;
        n-=mod;
        if(mod>=5){
           n+=mod;
           //cout <<n;
           while(mod!=0){
                n++;
                mod = n%10;
                if(mod==0){
                    cout <<n<<endl;
                    break;
                }
           }
        }
        else{
            cout <<n<<endl;
        }
       // cout <<n<<endl;
    }
    return 0;
}
