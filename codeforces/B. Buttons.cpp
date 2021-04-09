#include <iostream>
using namespace std;
int main()
{
   int n,ans=0;
   cin >>n;
   for(int i=1;i<n;i++){
        ans+=i%INT_MAX;
   }
   ans*=n;
   int m=0;
   for(int i=1;i<n;i++){
       m+=(i*i)%INT_MAX;
   }
   cout <<ans+n-m<<endl;
   return 0;
}
