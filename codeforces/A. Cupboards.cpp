#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int x=0,y=0,a=0,b=0;

    while(n--){
        int l,r;cin >>l>>r;

        if(!l)x++;
        else if(l)y++;
        if(!r)a++;
        else if(r)b++;
    }
    cout << min(x,y)+min(a,b);
}
