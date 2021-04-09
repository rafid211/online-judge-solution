#include <bits/stdc++.h>
using namespace std;
int fx[4]={1,0,-1,0};
int fy[4]={0,1,0,-1};
int main()
{
    int x,y;
    cin >> x>>y;
    int c=0;
    int a=0,b=0;
    int i=0;
    while(1){
        if(a==x&&b==y)break;
        if(i==4)i=0;
        a=a+fx[i];
        b=b+fy[i];
        cout <<a<<" "<<b<<endl;
        c++;i++;
    }
    cout << c<<endl;

}
