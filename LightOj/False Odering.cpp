#include <bits/stdc++.h>
using namespace std;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
typedef long long int ll;
typedef unsigned long long ull;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mod e9+7
#define mp make_pair
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
vector <pii>v;
int div(int n)
{
    int sq=sqrt(n),c=0;
    for(int i=1;i<=sq;i++){
        if(n%i==0){
            if((n/i)==i){c++;}
            else{c+=2;}
        }
    }
    return c;
}
bool cmp(const pii &a,const pii &b)
{
    if(a.se==b.se)return a.fi>b.fi;

    return a.se<b.se;
}
int main()
{
    //fast_io
    for(int i=1;i<=1000;i++){
        int d=div(i);
        //outt(i,d);
        v.pb(mp(i,d));
    }
    sort(v.begin(),v.end(),cmp);
   // for(int i=0;i<=1000;i++)outt(v[i].fi,v[i].se);
    int t,cnt=0;
    cin >>t;
    while(t--){
        int x;
        cin >>x;
        printf("Case %d: %d\n",++cnt,v[x-1].fi);
    }
    return 0;
}






