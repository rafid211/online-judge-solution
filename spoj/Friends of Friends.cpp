#include <bits/stdc++.h>
using namespace std;
set<int>s;
vector<int>v;
int main()
{
    int n;
    cin >>n;
    while(n--)
    {
        int f;cin >>f;
        v.push_back(f);
        int m;
        cin >>m;
        for(int i=0;i<m;i++){
            int x;cin >>x;
            s.insert(x);
        }
    }
    int c=s.size();
    for(int i=0;i<v.size();i++){
        if(s.find(v[i])!=s.end())c--;
    }
    cout <<c<<endl;
    return 0;
}
