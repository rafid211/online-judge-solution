#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
typedef long long int ll;
typedef unsigned long long ull;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define ASC(a,n) sort(a,a+n);
#define DESC(a,n) sort(a,a+n,greater<int>());
#define out(x) cout <<x<<endl;
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int digit(string s,int n)
{
    int c=0;
    for(int i=0;i<n;i++){
        if((s[i]-48)%3==0)c++;
    }
    return c;
}
int main()
{
    //input;
    //output;
    fast_io
    int t,cnt=0;
    cin >>t;
    while(t--){
        string n;
        cin >>n;
        ll sum=0;
        for(int i=0;i<n.size();i++){
            sum+= (n[i]-48);
        }
        bool ok=0,ss=1;
        if(n.size()==1){
            printf("Case %d: S\n",++cnt);
            continue;
        }
        if(sum%3==0){
            int d=digit(n,n.size());
            if(d%2==0){ss=0;}
        }
        else{
            for(int i=0;i<n.size();i++){
                if((sum-(n[i]-48))%3==0){ok=1;break;}
            }
            if(ok){
               int d=digit(n,n.size());
               if(d%2){ss=0;}
            }
            else{ss=0;}
        }

        if(ss){
            printf("Case %d: S\n",++cnt);
        }
        else{
             printf("Case %d: T\n",++cnt);
        }
    }
    return 0;
}






