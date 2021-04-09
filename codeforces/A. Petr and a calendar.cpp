#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pii pair<int,int>
#define pss pair<string,string>
#define fi first
#define se second
#define pb push_back
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define ASC(a,n) sort(a,a+n)
#define DESC(a,n) sort(a,a+n,greater<int>())
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    fast_io
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    cin >>m>>d;
    if(day[m-1]==31){
        if(d>=6){out(6);}
        else out(5);
    }
    else if(day[m-1]==30){
          if(d>6){out(6);}
          else out(5);
    }
    else if(day[m-1]==28){
        if(d>1){out(5);}
        else out(4);
    }
    return 0;
}





