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
    fast_io
    int n,a[101];
    cin >>n;
    int mn=9999,mx=-9999;
    for(int i=0;i<n;i++){
        cin >>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    if(a[0]==mx&&a[n-1]==mn){return out(0),0;}
    int x=0,y=0;
    mx=a[0],mn=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];x=i;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]<=mn){
            mn=a[i];y=i;
        }
    }
   // outt(x,y);
    int c=0;
    if(x>y)c++;

    out(n-1-y+x-c);
    return 0;
}



