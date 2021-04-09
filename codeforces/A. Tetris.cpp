#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
typedef long long int ll;
typedef unsigned long long ull;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
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
#define gcd(a,b) __gcd(5,10);
#define lcm(a, b) ((a)*((b)/gcd(a,b)))

int main() {

    //input;
    fast_io
    int n,k;
    ll sum=0;
    cin >>n>>k;
    int a[n],t[n],csum[n];
    k--;
    for(int i=0;i<n;i++)cin >>a[i];

    for(int i=0;i<n;i++)cin >>t[i];

    for(int i=0;i<n;i++){
        if(t[i]==1) sum+=a[i];
    }
    for(int i=0;i<n;i++) {
        if(i==0) {
            if(t[i]==0)csum[i]=a[i];
            else csum[i] = 0;
        }
        else {
            if(t[i]==0){csum[i]=csum[i-1]+a[i];}
            else {csum[i]=csum[i-1];}
        }
    }
    int prev = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if(t[i]==0){int y;
            if(i+k<n){y=csum[i+k];}
            else{y = csum[n - 1];}
            ans=max(ans,y-prev);
            prev = csum[i];
        }
    }
    out(sum + ans);
}







