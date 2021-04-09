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
    string name[8]= {"vaporeon","jolteon","flareon","espeon","umbreon","leafeon","glaceon","sylveon"};
    int n;
    cin >>n;
    string s;
    cin >>s;

    for(int i=0;i<8;i++){string r=name[i];int c=0,dot=0;
        if(r.size()==n){
            for(int k=0;k<n;k++){
                if(r[k]==s[k]){c++;}
                else if(s[k]=='.'){dot++;}
            }
            if(c+dot==n)return out(r),0;
        }
    }

    return 0;
}


