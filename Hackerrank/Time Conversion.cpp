#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s;
    char t[3];
    scanf("%d:%d:%d %s",&h,&m,&s,&t);
    if(strcmp(t,"AM")==0){
        if(h==12)h-=12;
    }
    if(strcmp(t,"PM")==0){
        if(h!=12)h+=12;
    }
    printf("%02d:%02d:%02d",h,m,s);
}
