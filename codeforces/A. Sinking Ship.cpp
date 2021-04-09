#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define out(x) cout <<x<<endl
#define mem(array,value) memset(array,value,sizeof(array))

int main()
{
    //input;
    fast_io
    int n;
    cin >>n;
    vector<pair<string,string> >v(n);

    for(int i=0;i<n;i++){
        cin >>v[i].fi>>v[i].se;
    }
    vector <string> res;
    for(int i=0;i<n;i++){
        if(v[i].se=="rat")res.pb(v[i].fi);
    }

    for(int i=0;i<n;i++){
        if(v[i].se=="woman"||v[i].se=="child")res.pb(v[i].fi);
    }

//    for(int i=0;i<n;i++){
//        if(v[i].se=="child")res.pb(v[i].fi);
//    }
    for(int i=0;i<n;i++){
        if(v[i].se=="man")res.pb(v[i].fi);
    }
    for(int i=0;i<n;i++){
        if(v[i].se=="captain")res.pb(v[i].fi);
    }

    for(int i=0;i<n;i++){
        out(res[i]);
    }
    return 0;
}


