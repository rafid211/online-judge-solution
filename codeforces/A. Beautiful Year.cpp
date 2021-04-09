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
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int a[10];
bool dig(int n)
{
    int rem;
    while(n!=0){
        rem=n%10;
        n/=10;
        a[rem]++;
    }
    for(int i=0;i<10;i++){
        if(a[i]>=2)return false;
    }
    return true;
}
int main()
{
   // input;
    fast_io
    int n;
    cin >>n;
    for(int i=n+1;;i++){mem(a,0);
        if(dig(i)){out(i);break;}
    }
    return 0;
}



