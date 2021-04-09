#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
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
bool check(int n)
{
    int sq=sqrt(n);
    for(int i=2;i<=sq;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    fast_io
    int n;
    cin >>n;
    int a=4,b=0;
    while(a+b!=n){
        b=n-a;
        if(!check(a)&&!check(b)){
            outt(a,b);break;
        }
        a++;
    }
    return 0;
}

