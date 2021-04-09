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
int main()
{
    fast_io
    int n;
    cin >>n;
    string org,comb;
    cin >>org>>comb;
    int moves=0;
    int a,b;
    for(int i=0;i<n;i++){
        a=org[i]-48;b=comb[i]-48;
        if(a>b){
           if(((10-a)+b)<(abs(a-b))){moves+=((10-a)+b);}
           else{moves+=(abs(a-b));}
        }
        else{
            if(((a+10)-b)<abs(b-a)){moves+=((a+10)-b);}
            else{moves+=abs(b-a);}
        }
    }
    out(moves);
    return 0;
}




