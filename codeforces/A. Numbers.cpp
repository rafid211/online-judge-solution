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
#define gcd(a,b) __gcd(a,b);
#define lcm(a, b) ((a)*((b)/gcd(a,b)))

int convert(int n,int base)
{
    int rem,i=1,ans=0;
    while (n!=0){
        rem=n%base;
        n/=base;
        //con+=rem*i;
        ans+=rem;
        //i*=10;
    }
    return ans;
}
int main()
{
    fast_io
    int n;
    cin >>n;
    int sum=0;
    for(int i=2;i<=n-1;i++){
        sum+=convert(n,i);
    }
    int d=n-2;
    int g =gcd(sum,d);
    sum/=g;
    d/=g;
    cout <<sum<<"/"<<d<<endl;
    return 0;
}







