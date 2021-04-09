#include <bits/stdc++.h>
using namespace std;
char c[5][5];
int x1[]={0,-1,-1};
int y1[]={-1,0,-1};

int x2[]={0,-1,-1};
int y2[]={1,0,1};

int x3[]={0,1,1};
int y3[]={-1,0,-1};

int x4[]={0,1,1};
int y4[]={1,0,1};

bool check(int row,int col)
{
    int go=0;
    for(int i=0;i<3;i++){
        int x=row+x1[i];
        int y=col+y1[i];
        if(x>=0&&x<4&&y>=0&&y<4){
            if(c[row][col]==c[x][y])go++;
        }
    }
    if(go>=2)return 1;
    go=0;
    for(int i=0;i<3;i++){
        int x=row+x2[i];
        int y=col+y2[i];
        if(x>=0&&x<4&&y>=0&&y<4){
            if(c[row][col]==c[x][y])go++;
        }
    }
    if(go>=2)return 1;
    go=0;
    for(int i=0;i<3;i++){
        int x=row+x3[i];
        int y=col+y3[i];
        if(x>=0&&x<4&&y>=0&&y<4){
            if(c[row][col]==c[x][y])go++;
        }
    }
    if(go>=2)return 1;
    go=0;
    for(int i=0;i<3;i++){
        int x=row+x4[i];
        int y=col+y4[i];
        if(x>=0&&x<4&&y>=0&&y<4){
            if(c[row][col]==c[x][y])go++;
        }
    }
    if(go>=2)return 1;

    return 0;

}
int main()
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >>c[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(check(i,j)){
                return cout << "YES"<<endl,0;
            }
        }
    }
    cout << "NO"<<endl;
    return 0;
}
