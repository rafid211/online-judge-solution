#include <bits/stdc++.h>
using namespace std;
struct Box
{
    int w,h;
};
int main()
{
    int n;
    cin >>n;
    Box box[n];
    for(int i=0;i<n;i++){
        cin >>box[i].w>>box[i].h;
    }
    int c=0;
    bool ok=1;
    for(int i=0;i<n-1;i++){
        int x=box[i].w,y=box[i].h;
        if(x>=box[i+1].w||y>=box[i+1].h||x>=box[i+1].h||y>=box[i+1].w){
            //c++;
            continue;
        }
        else{ok;break;}
    }
    if(ok){cout <<"YES"<<endl;}
    else {cout <<"NO"<<endl;}
    return 0;
}
