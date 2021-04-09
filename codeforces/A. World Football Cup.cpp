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
struct team
{
    string name;
    int points;
    int dif;
    int goal;
};
team t[51];
void set_team(string nm,string scr,int n)
{
    string n1,n2;int a=0,b=0,i;
    for(i=0;nm[i]!='-';i++){n1.pb(nm[i]);}
    for(int j=i+1;j<nm.size();j++){ n2.pb(nm[j]);}

    for(i=0;scr[i]!=':';i++){a=a*10+scr[i]-48;}
    for(int j=i+1;j<scr.size();j++){b=b*10+scr[j]-48;}
    //outt(a,b);
    for(int k=0;k<n;k++){
        if(t[k].name==n1){
            t[k].goal+=a;t[k].dif+=(a-b);
            if(a>b){t[k].points+=3;}
            if(a==b){t[k].points++;}

        }
        if(t[k].name==n2){
            t[k].goal+=b;t[k].dif+=(b-a);
            if(a<b){t[k].points+=3;}
            if(a==b){t[k].points++;}
        }
    }
}
bool comp(team a,team b)
{
    if(a.points!=b.points){return a.points>b.points;}
    else if(a.dif!=b.dif){return a.dif>b.dif;}
    else return a.goal>b.goal;
}

int main()
{
    //input;
    fast_io
    int n;
    cin >>n;
    for(int i=0;i<n;i++)cin >>t[i].name;

    int match=(n*(n-1))/2;
    //out(match);

    for(int i=0;i<match;i++){
        string nm,scr;
        cin >>nm>>scr;
        set_team(nm,scr,n);
        //cout <<nm<<" "<<scr<<endl;
    }
     sort(t,t+n,comp);
//    for(int k=0;k<n;k++){
//        cout <<t[k].name<<" "<<t[k].points<<" "<<t[k].dif<<" "<<t[k].goal<<endl;
//
//    }

    vector<string>nm;
    for(int i=0;i<(n/2);i++){nm.pb(t[i].name);}
    sortVA(nm);
    for(int i=0;i<(n/2);i++)out(nm[i]);

    return 0;
}



