#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >>n;
    string s,r;
    cin >>s>>r;
    string t1=s,t2=r;
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    if(t1!=t2){return cout <<-1<<endl,0;}
    int c=-1;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]!=r[i]){
            for(int k=i+1;k<n;k++){
                if(r[i]==s[k]){
                   c=k;break;
                }
            }
            for(int k=c-1;k>=i;k--){
                v.pb(k);
                swap(s[k],s[k+1]);
            }
        }
    }
    cout <<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout <<v[i]+1<<" ";
    return 0;
}
