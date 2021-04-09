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
int main()
{
    fast_io
    int a,b,c;
    cin >>a>>b>>c;
    int r[7];
    r[0]=a*b*c;
    r[1]=a+b+c;
    r[2]=a+b*c;
    r[3]=a*b+c;
    r[4]=(a+b)*c;
    r[5]=(a*b)+c;
    r[6]=a*(b+c);
    DESC(r,7);
    out(r[0]);
    return 0;
}




