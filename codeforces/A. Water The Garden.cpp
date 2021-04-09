#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mp make_pair
#define pii pair<int,int>
#define pss pair<string,string>
#define fi first
#define se second
#define pb push_back
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define ASC(a,n) sort(a,a+n);
#define DESC(a,n) sort(a,a+n,greater<int>());
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
bool check(bool b[],int n)
{
    bool ok=true;
    for(int i=0;i<n;i++){
        if(b[i]==false){ok=false;}
    }
    return ok;
}
int main()
{
    fast_io
    int t;
    cin >>t;
    vector<int>v;
    while(t--){
        int n,k,ans=0;
        cin >>n>>k;
        bool arr[n];mem(arr,false);
        int tap[n];
        int x;
        for(int i=0;i<k;i++){
            cin >>tap[i];
        }
        while(!check(arr,n)){
            for(int i=0;i<k;i++){
                int left=(tap[i]-1)+ans;
                if(left<n){arr[left]=1;}
                int right=(tap[i]-1)-ans;
                if(right>=0){arr[right] = 1;}
            }
            ans++;
        }
        out(ans);
    }
    return 0;
}

