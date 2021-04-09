#include <bits/stdc++.h>
using namespace std;
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
double lg[1000005];
void f()
{
    for(int i=1;i<=1000000;i++){
        lg[i]=lg[i-1]+log10(i);
    }
}
int main()
{
    //fast_io
    f();
    //cout <<lg[50]<<endl;
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n,base;
        scanf("%d %d",&n,&base);
        ll ans =lg[n]/log10(base)+1;
        printf("Case %d: %lld\n",++cnt,ans);
    }

    return 0;
}






