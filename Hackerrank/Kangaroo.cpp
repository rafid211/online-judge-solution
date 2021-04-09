#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin >>x1>>v1>>x2>> v2;
    int a=0,b=0;bool ok=0;
    while(1)
    {
        x1+=v1;a++;
        x2+=v2;b++;
        if(v2>v1){ok=0;break;}
        if(x1==x2){ok=1;break;}
        else if(x1>x2){ok=0;break;}

    }
    cout << ((ok)?"YES":"NO")<<endl;
    return 0;
}
