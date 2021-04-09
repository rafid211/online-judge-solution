#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[5];
bool f=0;
bool vis[5];
void ok(int index,int sum)
{
    if(sum==23&&index==5){
       f=1;return;
    }
    for(int i=0;i<5;i++){
        if(!vis[i]){
            vis[i]=1;
            ok(index+1,sum+a[i]);
            ok(index+1,sum*a[i]);
            ok(index+1,sum-a[i]);
            vis[i]=0;
        }
    }
}
int main()
{
    while(scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4])&&(a[0]||a[1]||a[2]||a[3]||a[4])){

        for(int i=0;i<5;i++){
            if(!vis[i]){
                vis[i]=1;
                ok(1,a[i]);
                vis[i]=0;
            }
        }
        ok(0,0);
        if(f){cout <<"Possible"<<endl;}
        else{cout <<"Impossible"<<endl;}
        f=0;
    }
    return 0;
}
