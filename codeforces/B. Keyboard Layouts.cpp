#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pb push_back
#define out(x) cout <<x<<endl
#define mem(array,value) memset(array,value,sizeof(array))

int getIndex(string a,char ch)
{
    for(int i=0;i<a.size();i++){
        if(a[i]==ch) return i;
    }
}
int main()
{
    fast_io
    string a,b,c;
    cin >>a;
    cin >>b;
    cin >>c;
    string res="";
    for(int i=0;i<c.size();i++){
        char ch = c[i];
        if(isupper(ch)){
            ch = (int)ch+32;
            //out((char)ch);
            int index = getIndex(a,(char)ch);
            char sec = b[index];
            sec = (int)sec-32;
            res+=(char)sec;
        }
        else if(islower(ch)){
            int index = getIndex(a,ch);
            char sec = b[index];
            res+=sec;
        }
        else{
            //int index = getIndex(a,ch);
            //char sec = b[index];
            res+=ch;
        }
    }
    out(res);
    return 0;
}

