#include <bits/stdc++.h>
using namespace std;
const int speed = 50;
vector <pair<int,int> >v;
#define f first
#define s second
int main()
{
    int n,k;
    cin >>n>>k;
    double c=0,ans=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin >>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(int i=1;i<n;i++){
        int x = v[i].f-v[i-1].f;
        int y = v[i].s-v[i-1].s;
        c = sqrt(x*x+y*y);
        ans+=c;
    }
    cout <<fixed<<setprecision(9)<<(ans*k)/speed<<endl;
    return 0;
}
