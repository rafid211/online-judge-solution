#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int>v;
    long long c=0;
    for(int i=0;i<n;i++){
        int a;cin >>a;
        if(a%2)v.push_back(a);
        else c+=a;
    }
    sort(v.begin(),v.end());

    int s=v.size();
    for(int i=0;i<s;i++)c+=v[i];

    if(s!=0&&s%2)c-=v[0];

    cout <<c<<endl;
    return 0;
}
