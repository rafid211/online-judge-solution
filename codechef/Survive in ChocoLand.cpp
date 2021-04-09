#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pb push_back


int main()
{
    fast_io
    int t;
    cin>>t;
    while(t--){
        int n,k,s,ch,total;
        cin>>n>>k>>s;
        ch=-1;
        int dl = 0;
        for(int i=1;i<=s;i++){
            dl=n*i;
            total=s*k;
            int lim = (s-s/7);
            if(dl>=total && i<=lim){
                ch = i;
                break;
            }
        }
        cout <<ch<< endl;
    }
    return 0;
}

