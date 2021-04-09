#include <bits/stdc++.h>
using namespace std;
vector <int> v;
bool luckyNum(int n)
{
    for(int i=0;i<v.size();i++){
        if(n==v.at(i)){
            return true;
        }
        else if(n%v.at(i)==0){
            return true;
        }
    }
    return false;
}
void number(int n)
{
    if(n>1000){
        return;
    }
    if(n!=0){
         v.push_back(n);
    }
    number(n*10+4);
    number(n*10+7);
}
int main()
{
    number(0);
    int n;
    cin >>n;

    if(luckyNum(n)==true){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
