#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int dif=abs(a-b);
    int s1,s2;
    s1=dif/2;
    s2=dif-s1;
    int ans=(s1*(s1+1))/2+(s2*(s2+1))/2;
    cout <<ans<<endl;
    return 0;
}
