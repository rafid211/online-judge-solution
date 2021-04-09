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
    string s,r;
    cin >>s>>r;
    for (int i=s.size()-1;i>=0;i--){
    	if(s[i]!='z'){
    		s[i]++;
    		if(s >= r){s = "No such string";}
    		break;
    	}
    	else{s[i] = 'a';}
    }
    out(s);
    return 0;
}

