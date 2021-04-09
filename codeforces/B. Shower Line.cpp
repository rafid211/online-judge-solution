#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int x[5][5];
int p[5];
int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >>x[i][j];
        }
    }
    int ans=-1,v=0;
    for(int i=0;i<5;i++)p[i]=i;
    do{
       int a=p[0],b=p[1],c=p[2],d=p[3],e=p[4];
       v=0;
       v+=x[a][b]+x[b][a]+x[c][d]+x[d][c];//12 34
       v+=x[b][c]+x[c][b]+x[d][e]+x[e][d];//23 45
       v+=x[c][d]+x[d][c];//3 4
       v+=x[d][e]+x[e][d];//4 5

       if(v>ans){
          ans=v;
       }


    }while(next_permutation(p,p+5));

    cout <<ans<<endl;

    return 0;

}
