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
char letter(string s,char c,char LR)
{
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            if(LR=='R'){return s[i-1];}
            else {return s[i+1];}
        }
    }
}
int main()
{
    fast_io
    string a="qwertyuiop",b="asdfghjkl;",c="zxcvbnm,./";
    char LR;
    cin >>LR;
    string s;
    cin >>s;
    for(int i=0;i<s.size();i++){
            if(a.find(s[i])!=-1){
                char ch=letter(a,s[i],LR);
                s[i]=ch;
            }
            else if(b.find(s[i])!=-1){
                char ch=letter(b,s[i],LR);
                s[i]=ch;
            }
            else if(c.find(s[i])!=-1){
                char ch=letter(c,s[i],LR);
                s[i]=ch;
            }
        }
        out(s);
    return 0;
}




