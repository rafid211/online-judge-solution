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
    int n;
    cin>>n;
    n*=2;

    vector<int>v(n),in;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int m=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            //int sum=0;
            for(int k=0;k<n;k++){
                if(k!=i&&k!=j){in.pb(v[k]);}
            }
//            for(k=0;k<v.size();k+=2)
//                sum+=(v[k+1]-v[k]);
//
//            m=min(m,sum);//out(sum);
        }
    }
    //sort(in.begin(),in.end());
    int sum=0;
    for(int i=0;i<in.size()-2;i++){
        //sum+=(v[i+1]-v[i]);
        out(in[i]);
    }

    //cout<<m;

    return 0;
}

