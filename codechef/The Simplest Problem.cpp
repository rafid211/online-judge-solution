#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
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

    int t;
    cin >>t;
    while(t--){
      ll n;
      cin >>n;
      ll a[n];
      for(int i=0;i<n;i++){
        cin >>a[i];
      }

      ll k,c=0;
      cin >>k;
      for(int i=0;i<n;i++){
         if(a[i]%k==0)c++;
      }
      out(c);
    }
    return 0;
}






