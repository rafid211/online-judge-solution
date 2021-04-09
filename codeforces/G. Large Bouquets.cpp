#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd=0,even=0;
    cin >>n;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        if(a%2)odd++;

        else even++;
    }
    int ans=0;
    if(odd<even){ans=odd;}
    else{ans=even;}
    odd-=ans;
    ans+=(odd/3);
    cout <<ans<<endl;
    return 0;

}
