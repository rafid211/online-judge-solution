#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t,a,b,c,d;
    cin >>t;
    bool flag;
    while(t--){
      cin >>a>>b>>c>>d;
      if(a==b && c==d){
        flag = true;
      }
      else if(a==c && b==d){
        flag = true;
      }
      else if(a==d && c==b){
        flag = true;
      }
      else{
        flag = false;
      }

      if(flag){
        cout <<"YES"<<endl;
      }
      else if(!flag){
        cout <<"NO"<<endl;
      }
      flag = false;
      a=b=c=d=0;
    }
    return 0;
}
