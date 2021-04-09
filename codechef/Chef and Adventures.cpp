#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define nl '\n'
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
#define gcd(a,b) __gcd(a,b);
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define MX 10005

int main()
{
    fast_io

    int t;
    cin >>t;
    while(t--)
    {
        int n,m,x,y;
        cin >>n>>m>>x>>y;
        int nn=n%x,mm=m%y;
        if(n==m&&n<=2){out("Chefirnemo");}
        else if(!nn && !mm){
            if(x<=2&&y<=2){out("Chefirnemo");}
            else {out("Pofik");}
        }
        else if(!nn &&mm){
            if(x<=2&&mm<=2&&m>=y){out("Chefirnemo");}
            else {out("Pofik");}
        }
        else if(nn && !mm){
            if(n>=x&&nn<=2&&y<=2){out("Chefirnemo");}
            else {out("Pofik");}
        }
        else if(nn==mm&&nn<=2){out("Chefirnemo");}
        else {out("Pofik");}

    }
    return 0;
}







