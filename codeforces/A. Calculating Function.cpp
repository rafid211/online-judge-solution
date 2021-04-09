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
    i64 n;
    cin >>n;
    i64 odd,even,total=0;
    if(n%2){
       even=n/2;
       odd=n-even;
       total = (even*(even+1))-(odd*odd);
       out(total);
    }
    else{
       even=n/2;
       odd=n-even;
       total = (even*(even+1))-(odd*odd);
       out(total);
    }
    return 0;
}




