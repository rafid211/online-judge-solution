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
int main()
{
    fast_io
    string a,b;
    cin >>a;
    cin >>b;

    int lena = a.size();
    int lenb = b.size();
    bool isSub = true;
    int sub=0;
    int i=0;
    while(i<lena){
        if(a[i]==b[0]){
            for(int k=0,j=i;k<lenb;k++,j++){
                if(a[j]==b[k]){continue;}
                else{isSub=false;}
            }
            if(isSub){i+=lenb;sub++;}
            else{i++;}
        }
        else{i++;}
        isSub=true;

    }
    out(sub);

    return 0;
}


