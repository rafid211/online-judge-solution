#include <iostream>
#include <algorithm>
using namespace std;

int sumOfDigit(int n) {
    int sum = 0;
    while(n!=0){
         sum+=n%10;
        n/=10;
    }
    return sum;
}
int number(string s)
{
    int sum=0,num=1;
   int len=s.size();
   if(len==1){
      num=0;
   }
   else{
      for(int i=0;i<len;i++){
          sum+=s[i]-48;
      }
      while(sum>=10){
          sum = sumOfDigit(sum);
          num++;
      }
   }
   return num;
}
int main() {
    string s;
    cin >>s;
    cout <<number(s)<<endl;
    return 0;
}
