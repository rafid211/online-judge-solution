#include <bits/stdc++.h>
using namespace std;
int a[5];
bool f(int index,int sum)
{
    if(index==5){
        if(sum==23)return true;
        else{return false;}
    }
    return f(index+1,sum+a[index])||f(index+1,sum*a[index])||f(index+1,sum-a[index]);

}
int main()
{
    while(scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4])&&(a[0]||a[1]||a[2]||a[3]||a[4]))
    {
        sort(a,a+5);
        bool ok=1,ans=0;
        ans=f(1,a[0]);
        while(ok){
           ok=next_permutation(a,a+5);
           ans=f(1,a[0]);
           if(ans)break;

        }
        cout <<((ans)?"Possible":"Impossible")<<endl;
    }
    return 0;
}
