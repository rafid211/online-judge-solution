#include <bits/stdc++.h>
using namespace std;
string s[507];

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

int main()
{
    int r,c;
    cin >>r>>c;
    for(int i=0;i<r;i++)cin >>s[i];

    bool ok=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(s[i][j]=='S'){
                for(int k=0;k<4;k++){
                    int dx=i+fx[k];
                    int dy=j+fy[k];
                    if(dx>=0&&dx<r&&dy>=0&&dy<c){
                        if(s[dx][dy]=='W'){
                            ok=0;
                            break;
                        }
                    }
                }
            }
        }
    }

    if(!ok){
        cout << "No";
        return 0;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(s[i][j]=='.')s[i][j]='D';
        }
    }
    cout <<"Yes"<<endl;
    for(int i=0;i<r;i++)cout << s[i]<<endl;

}
