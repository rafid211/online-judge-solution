#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mod 1000000007
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
int sumOfDigit(int a)
{
    int rem = 0,ans=1;
    while(a!=0){
        rem=a%10;
        a/=10;
        if(rem==0){continue;}
        ans*=rem;
    }
    return ans;
}

int digit(int a)
{
    if(a<10){
        return a;
    }
    else{
        return digit(sumOfDigit(a));
    }
}
int main()
{
    input;
    fast_io
    int q;
    cin >>q;
    while(q--){
        int l,r,k,c=0;
        cin >>l>>r>>k;
        int a = digit(l*r);
        out(a);
    }
    return 0;
}




