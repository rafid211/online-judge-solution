#include <iostream>
using namespace std;
bool b= false;
void check(int x)
{
   // cout <<"x "<<x<<endl;
   if(x<=0){
        return;
   }
   if(x%3==0){
        b=true;
    }
    else if(x%7==0){
        b=true;
    }
    else{
        check(x-3);
        //check(x-7);
    }
}
int main()
{
    int n,x;
    cin >>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        check(x);
        if(b==true){
            cout <<"YES"<<endl;
        }
        else if(b==false){
            cout <<"NO"<<endl;
        }
        b=false;
    }
    return 0;
}
