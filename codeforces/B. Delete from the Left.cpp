#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >>a>>b;
    int n1=a.size();
    int n2=b.size();
    if(a==b){cout <<0<<endl;return 0;}
    int i=n1-1,j=n2-1,c=0;
    while(i>=0||j>=0){
        if(a[i]!=b[j]){c+=2;c+=i+j;break;}
        i--;j--;
        //if(i<0){break;}
        //if(j<0){break;}
    }
    cout <<c<<endl;
}
