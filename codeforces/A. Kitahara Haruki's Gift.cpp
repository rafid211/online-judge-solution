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
    int n,a1=0,a2=0,sum=0;
    cin >>n;
    while(n--){
        int a;
        cin >>a;sum+=a;
        if(a==100){a1++;}
        if(a==200){a2++;}
    }
    //outt(a1,a2);
    int r=sum/100;
    if(r%2){out("NO");}
    else{
       if(a1==a2){out("YES");}
       //else if()
       else if(a1==0&&a2%2==0){out("YES");}
       else if(a2==0&&a1%2==0){out("YES");}
       else if(a1==(a2*2)){out("YES");}
       else if((a1%2==0)&&(a2%2==0)){out("YES");}
       else if(a1!=0&&a2!=0&&(a1*100)%2==0&&(a2*200)%2==0){out("YES");}
       else{out("NO");}
    }
    return 0;
}




