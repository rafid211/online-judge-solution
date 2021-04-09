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
    int n;
    cin >>n;
    int gift=0,one=1,two=2,c=0;bool a=1,b=0;
    while(n){
       if(a&&gift<=n){
            gift+=one;a=0,b=1;
            if(gift>n){break;}
            else c++;
        }
        else if(b&&gift<=n){
            gift+=two;a=1,b=0;
            if(gift>n){break;}
             else c++;
        }
        if(gift>=n)break;
    }
    out(c);
    return 0;
}




