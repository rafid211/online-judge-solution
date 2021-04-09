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
void excel_to_n(string s)
{
   int i=0;string col="";
   while(s[i]>='A'&&s[i]<='Z'){
        col.pb(s[i]);i++;
        //out(col);
   }
   string row="R";
   for(int k=i;k<s.size();k++)row.pb((char)s[k]);
   int a=0;
   i=0;
   while(i<col.size()){
      a=26*a+col[i]-65+1;i++;
      //out(a);
   }
   s="C";
   while(a!=0){
        char rem=a%10;
        a/=10;
        s+=rem+48;
    }
    reverse(s.begin()+1,s.end());//out(s);
    row+=s;
    out(row);

}
void n_to_excel(string s)
{
    int row=0,i,j,col=0;
    for(i=1;s[i]!='C';i++){
        row=row*10+s[i]-48;
    }
    for(j=i+1;j<s.size();j++){
        col=col*10+s[j]-48;
    }
    //outt(row,col);
    string ans="";
    //if(col<=26){ans.pb(65+col-1);}
    char rem;
    while(col>0){
        rem=(col-1)%26+65;
        ans=(char)(rem)+ans;
        col=(col-1)/26;
        //out(ans);
    }
    s="";
    while(row!=0){
        char rem=row%10;
        row/=10;
        s+=rem+48;
    }
    reverse(s.begin(),s.end());
    ans+=s;
    out(ans);
}
int main()
{
    fast_io
    int n;
    cin >>n;
    while(n--){
        string s;
        cin >>s;
        if(s[0]=='R'&&s[1]>='0'&&s[1]<='9'&& s.find('C',2)!=-1){n_to_excel(s);}
        else{excel_to_n(s);}
    }
    return 0;
}





