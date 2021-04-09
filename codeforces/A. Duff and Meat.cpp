#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
vector <pair<int,int> >v;
int main()
{
    int n,total=0;
    cin >>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a>>b;
        v.push_back(make_pair(a,b));
        total+=a;
    }
    int ans=0,p=INT_MAX;
    for(int i=0;i<n;i++){
        p = min(p,v[i].se);
        ans+= p*v[i].fi;
    }
    cout <<ans<<endl;
    return 0;
}
