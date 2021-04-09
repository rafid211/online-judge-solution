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
   // input;
    fast_io
    int n;
    cin >>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    int match = 0;
    for(int i=0;i<n;i++){int c=0;
        for(int j=0;j<n;j++){
            if(v[j]==v[i])c++;
        }
        match=max(match,c);
    }
    out(match);

    return 0;
}



