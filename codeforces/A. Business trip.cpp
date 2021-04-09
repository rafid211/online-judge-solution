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
    int k;
    int month[12];
    cin >>k;
    for(int i=0;i<12;i++)cin>>month[i];

    DESC(month,12);
    if(k==0)return out(0),0;

    int day=0,time=0;
    //vector<int>v;
    for(int i=0;i<12;i++){time+=month[i];day++;
        if(time>=k){
           // v.pb(day);
            break;
        }
    }
    if(time<k){out(-1);}
    else{out(day);}
    return 0;
}




