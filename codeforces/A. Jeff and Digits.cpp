#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int five=0,zero=0;
    for(int i=0;i<n;i++){
        int x;cin >>x;
        if(!x)zero++;
        else five++;
    }
    if(!zero){
        cout <<-1;
        return 0;
    }
    if(five<9){
        cout << 0;
        return 0;
    }
    int x=five/9;
    x*=9;
    while(x){
        cout << 5;
        x--;
    }
    while(zero){
        cout <<0;
        zero--;
    }
}
