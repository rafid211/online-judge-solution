#include <bits/stdc++.h>
using namespace std;
int a[5][5],b[5][5];
int c=0;
void f(int i,int j)
{
    if(b[i][j])b[i][j]=0;
    else b[i][j]=1;

    if(b[i-1][j])b[i-1][j]=0;
    else b[i-1][j]=1;

    if(b[i][j-1])b[i][j-1]=0;
    else b[i][j-1]=1;

    if(b[i+1][j])b[i+1][j]=0;
    else b[i+1][j]=1;

    if(b[i][j+1])b[i][j+1]=0;
    else b[i][j+1]=1;



}
int main()
{
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin >>a[i][j];
            b[i][j]=1;
        }
    }
    bool flag=0;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(a[i][j]==0)continue;
            if(a[i][j]&1){
               f(i,j);
            }

        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(b[i][j])cout <<1;
            else cout <<0;
        }
        cout <<endl;
    }
}
