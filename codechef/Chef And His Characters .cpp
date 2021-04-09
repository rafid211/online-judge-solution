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
    //input;
    fast_io
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int n=s.size(),way=0;
        int a=0;
        for(int i=0;i<n;i++){int h=0,e=0,f=0;
            if(s[i]=='c'){
                for(int k=i+1;k<=i+3;k++){
                    if(s[k]=='h'){h++;}
                    else if(s[k]=='e'){e++;}
                    else if(s[k]=='f'){f++;}
                    else{a=0;break;}
                }
            }
            if(e==1&&h==1&&f==1){way++;}
        }
        a=0;
        for(int i=0;i<n;i++){int c=0,e=0,f=0;
            if(s[i]=='h'){
                for(int k=i+1;k<=i+3;k++){
                    if(s[k]=='c'){c++;}
                    else if(s[k]=='e'){e++;}
                    else if(s[k]=='f'){f++;}
                    else{a=0;break;}
                }
            }
            if(c==1&&e==1&&f==1){way++;}
        }
        a=0;
        for(int i=0;i<n;i++){int h=0,c=0,f=0;
            if(s[i]=='e'){
                for(int k=i+1;k<=i+3;k++){
                    if(s[k]=='h'){h++;}
                    else if(s[k]=='c'){c++;}
                    else if(s[k]=='f'){f++;}
                    else{a=0;break;}
                }
            }
            if(c==1&&h==1&&f==1){way++;}
        }
        a=0;
        for(int i=0;i<n;i++){int h=0,e=0,c=0;
            if(s[i]=='f'){
                for(int k=i+1;k<=i+3;k++){
                    if(s[k]=='h'){h++;}
                    else if(s[k]=='e'){e++;}
                    else if(s[k]=='c'){c++;}
                    else{a=0;break;}
                }
            }
            if(e==1&&h==1&&c==1){way++;}
        }
        if(way!=0){outt("lovely",way);}
        else{out("normal");}
    }
    return 0;
}




