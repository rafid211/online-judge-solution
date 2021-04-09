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
bool sumofdig(i64 n)
{
    i64 rem,sum=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        if(rem==0){return false;}
        //sum+=rem;
    }
    return true;
}
int main()
{
   // clock_t begin = clock();
    fast_io
    int n,t;
    cin >>n>>t;
    double low = (double)pow(10,n-1),up=(double)pow(10,n)-1;
    //out(low);out(up);
    for(int i=low;i<=up;i++){
        bool s = sumofdig(i);
        if(s!=false){
            if(i%t==0){
                out(i);
                break;
            }
        }
    }
   // clock_t end=clock();
    //printf("Time taken:%lf",(double)(end-begin)/CLOCKS_PER_SEC);
    return 0;
}




