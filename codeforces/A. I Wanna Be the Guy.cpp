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
#define ASC(a,n) sort(a,a+n)
#define DESC(a,n) sort(a,a+n,greater<int>())
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    fast_io
    int n;
    cin >>n;
    bool dig[101];
    mem(dig,0);

    int a,b;
    cin >>a;
    while(a--){
        int in;
        cin >>in;
        dig[in]=1;
    }
    cin >>b;
    while(b--){
        int in;
        cin >>in;
        dig[in]=1;
    }

    bool ok=true;
    for(int i=1;i<=n;i++){
        if(!dig[i]){ok=false;}
    }
    if(ok){out("I become the guy.");}
    else if(!ok){out("Oh, my keyboard!");}
    return 0;
}






