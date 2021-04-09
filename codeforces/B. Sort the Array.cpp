#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n],temp[n];
    for(int i=0;i<n;i++)cin >>a[i],temp[i]=a[i];
    bool inc=1;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i])inc=0;
    }
    if(inc)return cout <<"yes"<<endl<<n<<" "<<n<<endl,0;
    sort(temp,temp+n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x=temp[i];
        m[x]=i;
    }
    for(int i=0;i<n;i++){
        a[i]=m[a[i]];
    }

    int x=-1,y=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=i){x=i;break;}
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=i){y=i;break;}
    }
    reverse(a+x,a+y+1);
    bool ok=1;
    for(int i=0;i<n;i++)if(a[i]!=i)ok=0;
    if(ok)cout <<"yes"<<endl<<x+1<<" "<<y+1<<endl;
    else cout <<"no"<<endl;

}
