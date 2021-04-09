#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define fi first
#define se second
#define pb(x) push_back(x)
#define out(x) cout <<x<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    //input;
    fast_io
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    int les=v[0],more=v[0],c=0;
    for(int i=0;i<n;i++){
        if(v[i]<les){les=v[i];c++;}
        if(v[i]>more){more=v[i];c++;}
    }
    out(c);
    return 0;
}


