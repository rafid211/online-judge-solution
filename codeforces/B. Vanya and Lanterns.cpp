#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mp make_pair
#define pii pair<int,int>
#define pss pair<string,string>
#define fi first
#define se second
#define pb push_back
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define ASC(a,n) sort(a,a+n);
#define DESC(a,n) sort(a,a+n,greater<int>());
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    //input;
    fast_io
    int n,l,a[1001];
    cin >>n>>l;
    for(int i=0;i<n;i++)cin >>a[i];

    ASC(a,n);
    int i=0,j=1;double dis=-9999.00;
    while(j<n){
       double d=(a[j]-a[i])/(double)2;
       dis=max(dis,d);
       i++;j++;
    }
    double d=max(a[0]-0,l-a[n-1]);//printf("%0.9lf\n",d);
    dis=max(dis,d);
    printf("%0.10lf\n",dis);
    return 0;
}




