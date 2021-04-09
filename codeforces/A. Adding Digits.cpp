#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin >>a>>b>>n;
    string s;
    int c=a;
    while(c){s+= (c%10)+48;c/=10;}
    reverse(s.begin(),s.end());

    int x=a,d=-1,temp=x;
    for(int i=0;i<10;i++){
        x=x*10+i;
        temp=x;
        temp%=b;
        if(!temp){d=i;break;}
        else x/=10;
    }
    if(d<0)return cout <<-1<<endl,0;

    s+=(d+48);
    n--;
    while(n--){
        s+='0';
    }
    cout <<s<<endl;


}
