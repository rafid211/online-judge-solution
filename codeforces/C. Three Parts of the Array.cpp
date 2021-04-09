#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i];

    int i=0,j=n-1;
    int c1=0,c2=0;
    while(1)
    {
       if(i==j){break;}
       if(c1<=c2){
            c1+=a[i];
            i++;
       }
       else{
          c2+=a[j];
          j--;
       }
    }
    cout <<c1<<" "<<c2<<endl;
}
