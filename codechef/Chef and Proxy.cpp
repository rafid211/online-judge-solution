#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='P')c++;
        }
        int x=(c*100)/n;
        if(x>=75){
            cout << 0<<endl;
            continue;
        }
        int go=c;
        bool ok=0;
        for(int i=0;i<n;i++){
            if(i+2<n && i-2>=0 && s[i]=='A'){
                if((s[i-1]=='P'||s[i-2]=='P') && 
                    (s[i+1]=='P'||s[i+2]=='P')){
                    c++;
                }
                
            }
            x=(c*100)/n;
            if(x>=75){ok=1;break;}
        }
        if(ok){
            cout << c-go<<endl;
        }
        else {
            cout << -1<<endl;
        }
    }
}