#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mod 1000000007
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
    int t;
    cin >>t;
    for(int i=1;i<=t;i++){
        i64 m,n,in,sum=0,x;
        vector <i64>v;
        cin >>m>>n;
        for(i64 row=0;row<m;row++){
            for(i64 col=0;col<n;col++){
                cin >>in;
                sum+=in;
            }
            v.pb(sum);//out(sum);
            sum=0;
        }
        x=v[0];int ss=v.size();
        for(int p=1;p<ss;p++){x^=v[p];}
        cout <<"Case "<<i<<": ";
        if(x!=0){cout <<"Alice";}
        else{cout <<"Bob";}
        cout <<"\n";
    }
    return 0;
}




