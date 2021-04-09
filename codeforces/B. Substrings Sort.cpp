#include <bits/stdc++.h>
using namespace std;
bool cmp(const string &a,const string &b)
{
    return a.size()<b.size();
}
int main()
{
    int n;
    cin >>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >>s[i];
    }
    sort(s,s+n,cmp);
    bool ok=1;
    for(int i=0;i<n-1;i++){
        string a=s[i],b=s[i+1];
        if(b.find(a)==-1){cout <<"NO"<<endl;return 0;}
    }
    cout <<"YES"<<endl;
    for(int i=0;i<n;i++)cout <<s[i]<<endl;
    return 0;
}
