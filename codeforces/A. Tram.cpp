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
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    //input;
    fast_io
    int n;
    cin >>n;
    vector<pii>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a>>b;
        v.pb(mp(a,b));
    }
    int m,cur=0;vector<int>c;
    for(int i=0;i<n;i++){
        if(i==0){
            cur=v[i].se-v[i].fi;c.pb(cur);
            continue;
        }
        if(i==1){cur=v[i-1].se+v[i].se-v[i].fi;c.pb(cur);continue;}
        cur=cur+v[i].se-v[i].fi;
        c.pb(cur);
    }
    sortVD(c);
    out(c[0]);
    return 0;
}



