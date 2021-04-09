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
    int n,m;
    cin >>n>>m;
    int a[55],ban[55];
    for(int i=0;i<n;i++){cin >>a[i];}
    for(int i=0;i<m;i++){cin >>ban[i];}
    DESC(a,n);
    DESC(ban,m);
    vector<i64>v;
    for(int i=1;i<n;i++){
        for(int k=0;k<m;k++){
            i64 p= a[i]*ban[k];
            v.pb(p);
        }
    }
    sortVD(v);
   // for(int i=0;i<v.size();i++)out(v[i]);
    out(v[0]);
    return 0;
}




