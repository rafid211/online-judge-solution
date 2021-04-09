#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
typedef map<int,int> mii;
typedef map<string,long long int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
typedef long long int ll;
typedef unsigned long long ull;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
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
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
string word[100002];
string msg[100002];
ll cost[100002];
vector <ll>v[100002];
ll n,k,m;
msi mw;
int main()
{
    //input;
    fast_io
    cin >>n>>k>>m;
    for(int i=1;i<=n;i++)cin >>word[i];

    for(int i=1;i<=n;i++)cin >>cost[i];

    for(int i=1;i<=n;i++){
        mw[word[i]]=cost[i];
    }


    for(int i=0;i<k;i++){
        int x;cin >>x;
        ll arr[x];ll mn=LONG_LONG_MAX;
        for(int j=0;j<x;j++){
           cin >>arr[j];
           mn = min(mn,cost[arr[j]]);
        }
        for(int j=0;j<x;j++){
            mw[word[arr[j]]] = min(mn, mw[word[arr[j]]]);
        }
    }
    for(int i=0;i<m;i++){cin >>msg[i];}
    ll total=0;
    for(int i=0;i<m;i++){
        total += mw[msg[i]];
    }
    out(total);
    return 0;
}






