#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int main()
{
  i64 n;
  vector <i64> v;
  cin >>n;
  for(i64 i=1;i<=n;i++){
    i64 sq = i*i;
    if(sq<=n){
      //cout <<sq<<endl;
      v.push_back(sq);
    }
  }
 cout <<v.back()<<endl;
 return 0;
}
