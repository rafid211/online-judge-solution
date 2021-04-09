#include <bits/stdc++.h>
using namespace std;
vector<int> v;
#define out(x) cout <<x<<" "
int f(int n,int len)
{
    for(int i=0;i<len;i++){
        if(v[i]==n)return i;
    }
    return -1;
}
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){v.push_back(i);out(i);}
    }
    cout <<endl;
    int i=1;
    bool ok=0;
    while(i<n){int k=0;c=0;
        while(k<v.size()){
            if(f(v[k]+i,n)!=-1){
                c++;
                k=f(v[k]+i,n);cout <<v[k]<<" "<<i<<" "<<k<<endl;
                if(c==4){ok=1;break;}
            }
            else {break;}
        }
        if(ok){cout <<"Yes"<<endl;return 0;}
        i++;
    }
    cout <<"No"<<endl;
    return 0;
}
