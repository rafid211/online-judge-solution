#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mod 1000000007
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
    fast_io
    i64 n,t;
    cin >>n>>t;
    i64 a[100002];
    for(int i=0;i<n;i++)cin >>a[i];

    i64 i=0,sum=0,k=0;
    vector <i64>v;
    while(i<n){
        while(sum+a[k]<=t&&k<n){
            sum+=a[k];
            k++;
        }
        v.pb(k-i);
        sum-=a[i];
        i++;
    }
    sortVD(v);
    out(v[0]);
    return 0;
}




