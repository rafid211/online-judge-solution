#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int check1(int n,int pos,int le,int ri)
{
    int time=0;
    if(le>1){
        time+= abs(pos-le)+1;
        pos=le;
    }
    if(ri<n){
        time+=abs(pos-ri)+1;
        pos=ri;
    }
    return time;
}

int check2(int n,int pos,int le,int ri)
{
    int time=0;
    if(ri<n){
        time+=abs(pos-ri)+1;
        pos=ri;
    }

     if(le>1){
        time+= abs(pos-le)+1;
        pos=le;
    }
    return time;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n,pos,l,r;
    cin >>n>>pos>>l>>r;
    int t1=check1(n,pos,l,r);
    int t2=check2(n,pos,l,r);
    cout <<((t1<t2)?t1:t2)<<endl;
    return 0;
}
