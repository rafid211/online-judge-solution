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

int main()
{
    fast_io
    string a,b;
    cin >>a>>b;
    sortVD(a);
    string ans="",temp;
    int n=a.size();bool found=0;
    //vector<string >v;
    if(n<b.size()){out(a);return 0;}
    while(1){
        int i=0;n=a.size();
        if(a.size()<=0){break;}
        for(int i=0;i<n;i++){
            temp = a;
            temp.erase(i,1);
            sortVA(temp);
            temp=ans+a[i]+temp;
           // cout <<temp<<endl;
            if(temp<=b){
                ans+=a[i];
                a.erase(i,1);//i++;
                break;
            }
           // i++;
        }
    }
    out(ans);
    return 0;
}




