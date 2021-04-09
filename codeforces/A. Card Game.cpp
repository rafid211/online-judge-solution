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
int ranknum(char c)
{
    char crank[9]= {'6','7','8','9','T','J','Q','K','A'};
    for(int i=0;i<9;i++){
        if(c==crank[i])return i;
    }
}
int main()
{
    fast_io
    char tramp;
    cin >>tramp;
    string a,b;
    cin >>a>>b;
    if(a[1]==tramp && b[1]!=tramp){ //out(1);
        return out("YES"),0;
    }
    if(a[1]==tramp && b[1]==tramp){ //out(2);
        if(ranknum(a[0])>ranknum(b[0])){
            return out("YES"),0;
        }
        else return out("NO"),0;
    }
    if(a[1]==b[1]){ //out(3);
        if(ranknum(a[0])>ranknum(b[0])){
            return out("YES"),0;
        }
        else return out("NO"),0;
    }
    else out("NO");

    return 0;
}


