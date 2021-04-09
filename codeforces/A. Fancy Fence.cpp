#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int i=3,p=n;
        string s="NO";
        while(p<=n){
            p=((i-2)*180)/i;
            //cout <<i<<" "<<p<<endl;
            if((int)p==n&&(i-2)*180==(p*i)){s="YES";break;}
            i++;
            if(p>n)break;
        }
        cout <<s<<endl;
    }
    return 0;
}
