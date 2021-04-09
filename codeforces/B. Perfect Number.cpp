#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
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
vector<int>v;
int sum(int n)
{
    int rem,s=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        s+=rem;
    }
    return s;
}
int main()
{
    fast_io
    int k,c=0;
    cin >>k;
    for(i64 i=11;c!=k;i++){
        int s=sum(i);
        if(s==10){c++;v.pb(i);}
    }
    out(v[k-1]);
    return 0;
}




