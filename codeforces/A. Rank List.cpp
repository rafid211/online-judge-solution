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

bool comp(pii a,pii b)
{
    if(a.fi==b.fi){return a.se<b.se;}
    else{return a.fi>b.fi;}
}
int main()
{
    fast_io
    int n,k;
    cin >>n>>k;
    vector<pii>v;
    for(int i=0;i<n;i++){
        int p,t;
        cin >>p>>t;
        v.pb(mp(p,t));
    }
    sort(v.begin(),v.end(),comp);
    int c=0;
    int f=v[k-1].fi,l=v[k-1].se;

    for(int i=0;i<n;i++){
        if(v[i].fi==f&&v[i].se==l)c++;
    }
    out(c);


    return 0;
}




