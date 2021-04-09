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
    fast_io
    //mem(dig,0);
    int t;
    cin >>t;
    bool a=1,b=0;
    while(t--){
        int n;
        cin >>n;
        if(a){out("2easy");a=0;b=1;}
        else if(b){out("2hard");b=0,a=1;}
    }
    return 0;
}


