#include <bits/stdc++.h>
using namespace std;
bool boy[101],girl[101];
int main()
{
    int n,m;
    cin >>n>>m;
    int b,g;
    cin >>b;
    for(int i=0;i<b;i++){
        int a;cin >>a;
        boy[a]=1;
    }
    cin >>g;
    for(int i=0;i<g;i++){
        int a;cin >>a;
        girl[a]=1;
    }
    for(int i=0;i<100000;i++){
        int index_b = i%n;
        int index_g = i%m;
        if(boy[index_b]||girl[index_g]){
            boy[index_b]=1;
            girl[index_g]=1; //cout <<index_b<<" "<<index_g<<endl;
        }

    }
    int f=0;
    for(int i=0;i<n;i++){
        if(boy[i]){f++;}
    }
    for(int i=0;i<m;i++){
        if(girl[i]){f++;}
    }
    //cout <<f<<endl;
    if(f==m+n){puts("Yes");}
    else{puts("No");}
    return 0;

}

