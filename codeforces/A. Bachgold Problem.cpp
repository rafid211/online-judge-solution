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
int main()
{
    fast_io
    int n;
    cin >>n;
    int i=2,j=3,sum=0,c=0;
    vector<int>v;
    while(sum!=n){
        if((n-sum)%i==0){
            sum+=i;c++;v.pb(i);
        }
        else if((n-sum)%2){
            sum+=j;c++;v.pb(j);
        }
    }
    out(c);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    out('\n');
    return 0;
}




