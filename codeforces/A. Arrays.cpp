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
#define MAX_SIZE 100001
int main()
{
    fast_io
    int na,nb,a[MAX_SIZE],b[MAX_SIZE];
    cin >>na>>nb;
    int k,m;
    cin >>k>>m;
    for(int i=0;i<na;i++)cin >>a[i];

    for(int i=0;i<nb;i++) cin >>b[i];

    ASC(a,na);
    DESC(b,nb);
    vector<int>temp(k),bb(m);
    for(int i=0;i<k;i++){
        temp[i]=a[i];
        //out(temp[i]);
    }
    for(int i=0;i<m;i++){
        bb[i]=b[i];
        //out(bb[i]);
    }
    sortVA(bb);
    bool big=true;
    for(int i=0;i<k;i++){
        if(bb[0]>temp[i]){continue;}
        else{big=false;}
    }
    if(big){out("YES");}
    else{out("NO");}
    return 0;
}




