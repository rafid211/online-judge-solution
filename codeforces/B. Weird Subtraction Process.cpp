#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,m,n;
void f()
{
    while(1){
       if(a==0||b==0){
            break;
       }
       if(a>=2*b){
            a=a%(2*b);continue;
          }
        else if(b>=2*a){
            b=b%(2*a);
            continue;
          }
        else{break;}
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin >>a>>b;
    f();
    cout <<a<<" "<<b<<endl;
    return 0;
}
