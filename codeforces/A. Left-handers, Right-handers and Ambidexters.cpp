#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,team=0;
    cin >>l>>r>>a;
    if((l==0||r==0)&&a==0){
        team=0;
    }
    else if(abs(l-r)>a){
        team= l+r+2*a-abs(l-r);
    }
    else{
        team=l+r+a;
        if(team%2){team--;}
    }
    cout <<team<<endl;
    return 0;
}
