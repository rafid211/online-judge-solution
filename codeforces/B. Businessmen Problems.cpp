#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f first
#define s second
int main()
{
    int n;
    cin >>n;
    map<int,int>x,y;
    set<int>val;
    set<int>::iterator it;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a>>b;
        x[a]=b;
        val.insert(a);
    }
    int m;
    cin >>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >>a>>b;
        y[a]=b;
        val.insert(a);
    }
    ll ans=0;

    for(it=val.begin();it!=val.end();it++){
        int index = *it;
        ans+= max(x[index],y[index]);
    }
    cout <<ans<<endl;
    return 0;
}
