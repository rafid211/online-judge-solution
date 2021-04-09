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
    i64 a=0,b=1,c=0;
    int n;
    cin >>n;
    vector<i64>v;
    string s;
    for(int i=0;i<n;i++){
        s+='o';
    }
    for(int i=1;;++i)
    {
        if(i == 1){continue;}
        if(i == 2){v.pb(b);continue;}
        c=a+b;
        a= b;
        b =c;
        if(c<=n){v.pb(c);}
        else{break;}
    }

    for(int i=0;i<v.size();i++){
        if(v[i]<=n){
            s[v[i]-1]='O';
            //out(v[i]);
        }
    }
    out(s);
    return 0;
}



