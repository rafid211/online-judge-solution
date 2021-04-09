#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pb push_back
#define out(x) cout <<x<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    fast_io
    int n;
    cin >>n;
    string s;
    cin >>s;
    string r = "";
    if(n%2){
        for(int i=0;i<n;i++){
            if(i==0){r.pb(s[i]);}
            else if(i%2){r.insert(r.begin(),s[i]);}
            else{r.pb(s[i]);}
            //cout <<r<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(i==0){r.pb(s[i]);}
            else if(i%2){r.pb(s[i]);}
            else{r.insert(r.begin(),s[i]);}
        }
    }
    cout <<r<<endl;
    return 0;
}


