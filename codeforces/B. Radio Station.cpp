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
    //input;
    fast_io
    int n,m;
    cin >>n>>m;
    map<string ,string >ip;
    for(int i=0;i<n;i++){
        string a,b;
        cin >>a;
        cin >>b;
        b+=';';
        ip[b]=a;
    }
    for(int i=0;i<m;i++){
        string a,b;
        cin >>a;
        cin >>b;
        cout <<a<<" "<<b<<" #"<<ip[b]<<endl;
    }
    return 0;
}




