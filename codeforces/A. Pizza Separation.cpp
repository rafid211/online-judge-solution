#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int minNum(int a[],int n)
{
    int ans=1000,sum=0;
    for(int i=0,j=0;i<n;i++){
        sum+=a[i];
        if(sum<180){
            ans = min(ans,360-sum-sum);
            //cout <<"a"<<ans<<endl;
        }
        else{
            while(sum>=180){
                ans=min(ans,abs(360-(sum+sum)));
                sum-=a[j];
                j++;

            }
            ans = min(ans,360-(sum+sum));
        }
    }
  //  cout <<ans<<endl;
   return ans;
}
int main()
{
    int n;
    cin >>n;
    int a[360];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cout <<minNum(a,n)<<endl;;
}
