#include <bits/stdc++.h>
using namespace std;
typedef map<string,int> msi;
typedef map<string,string> mss;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
typedef long long int ll;
typedef unsigned long long ull;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mod e9+7
#define mp make_pair
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
vector<ll>num,bin;
void sepn(string s)
{
    ll n=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='.'){
            num.pb(n);n=0;
            continue;
        }
        n=n*10+s[i]-48;
    }
    num.pb(n);
}

void sepbin(string s)
{
    ll n=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='.'){
            bin.pb(n);n=0;
            continue;
        }
        n=n*10+s[i]-48;
    }
    bin.pb(n);
}

int con(ll n)
{
    //if(n==0)return 0;
    if(n==1)return 1;
    return (n%2)?10*con(n/2)+1:10*con(n/2);
}
int main()
{
    fast_io
    //input;
    int t,cnt=0;
    cin >>t;
    while(t--){
       string n,b;
       cin >>n>>b;
       sepn(n);
       sepbin(b);int c=0;
      // outt(n,b);
       for(int i=0;i<bin.size();i++){
           ll bal;
           if(num[i]==0){bal=0;}
           else{bal=con(num[i]);}
           if(bal==bin[i]){
              c++;
           }
        }
       if(c==4){
          cout<<"Case "<<++cnt<<": Yes"<<endl;
       }
       else{
          cout<<"Case "<<++cnt<<": No"<<endl;
       }
       bin.clear();num.clear();
    }
    return 0;
}






