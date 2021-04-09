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
    //clock_t begin = clock();
    fast_io
    int n;
    cin >>n;
    int step=0,temp=n,reach=0;
    while(reach!=n){
        if(temp%5==0){
            temp/=5;
            step+=temp;
            reach+=(5*temp);
        }
        else {
            int rem=temp%5;
            temp-=rem;
            step++;
            reach+=rem;
        }
       // out(step);
    }
    out(step);
    //clock_t end= clock();
    //printf("Time: %lf\n",(end-begin)/CLOCKS_PER_SEC);
    return 0;
}




