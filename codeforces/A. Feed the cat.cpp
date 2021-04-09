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

int main()
{
    fast_io
    int hh,mm;
    cin >>hh>>mm;
    double h,d,c,n;
    cin >>h>>d>>c>>n;
    double ans;
    if(hh>=20&&hh<=23){
        double u = ceil(h/n);
        double p = u*c;
        double dis = (20*p)/100;
        ans = p-dis;
        cout <<fixed<<setprecision(6)<<ans<<endl;
        return 0;
    }
    int hl,minn,duph=h;
    if(mm>0){
       hl = 20-hh-1;
       minn = hl*60;
       minn += (60-mm);
    }
    else{
        hl=20-hh;
        minn = hl*60;
    }
    h+=(minn*d);
    double u = ceil(h/n);
    double p = u*c;
    double dis = (20*p)/100;
    ans = p-dis;
    //cout <<ans<<endl;
    h=duph;
    u = ceil(h/n);
    p = u*c;
    ans = min(ans,p);
    cout <<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}





