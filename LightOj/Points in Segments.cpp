#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);

        sort(a,a+n);
        printf("Case %d:\n",++cnt);
        while(q--){
           int x,y;
           scanf("%d %d",&x,&y);
           int l=lower_bound(a,a+n,x)-a;
           int r=upper_bound(a,a+n,y)-a;

           printf("%d\n",r-l);
        }
    }
    return 0;

}
