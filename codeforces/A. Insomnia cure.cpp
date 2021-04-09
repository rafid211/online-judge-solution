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
#define ASC(a,n) sort(a,a+n);
#define DESC(a,n) sort(a,a+n,greater<int>());
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))
int main()
{
    fast_io
    int k,l,m,n,d;
    cin >>k>>l>>m>>n>>d;
    int temp=k;
    bool dragon[100001];
    mem(dragon,false);
    while(temp){
        if(temp<=d){dragon[temp]=1;}
         temp+=k;
         if(temp>d)break;
    }
    temp=l;
    while(temp){
        if(temp<=d){dragon[temp]=1;}
         temp+=l;
         if(temp>d)break;
    }
    temp=m;
    while(temp){
        if(temp<=d){dragon[temp]=1;}
         temp+=m;
         if(temp>d)break;
    }
    temp=n;
    while(temp){
        if(temp<=d){dragon[temp]=1;}
         temp+=n;
         if(temp>d)break;
    }
    int c=0;
    for(int i=1;i<=d;i++){
        if(dragon[i]==false){c++;}
    }
    out(d-c);
    return 0;
}




