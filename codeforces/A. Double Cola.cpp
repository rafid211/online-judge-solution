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
    string s[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    i64 n;
    cin >>n;
    int temp=0,var,high=0,low=0;
    if(n<=5){return out(s[n-1]),0;}
    for(int i=0;;i++){
         var=1<<i;
        temp+=(5*var);
        if(temp>n){
            high=temp;
            break;
        }
        low = temp;
    }
    //out(temp);
    temp = high-low;
    temp/=5;
    int index=0;
    while(1){
        low+=temp;
        index++;
        if(low>n){
            //out(low);
            break;
        }

    }
    out(s[index-1]);
    return 0;
}



