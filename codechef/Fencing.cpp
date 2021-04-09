#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define x first
#define y second
#define pb push_back
map<pii,int>m;
map<pii,bool>vis;
int row,col,k;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
ll c=0;

bool valid(int x,int y)
{
    return (x>=1&&x<=row&&y>=1&&y<=col);
}
void dfs(pii s)
{
    vis[s]=1;
    c++;
    cout << s.x<<" "<<s.y<<endl;
    for(int i=0;i<4;i++){
        int dx=s.x+fx[i];
        int dy=s.y+fy[i];
        if(valid(dx,dy)&&m.count({dx,dy})&&!vis[{dx,dy}]){
            dfs({dx,dy});
        }
    }

}
int main()
{
    int t;
    cin >>t;
    while(t--){
        cin >>row>>col>>k;
        vector<pii>v;
        for(int i=0;i<k;i++){
            int a,b;
            cin >>a>>b;
            v.pb({a,b});
            m[{a,b}]=1;
        }
        sort(v.begin(),v.end());
        ll total=k*4;

        ll go=0;
        for(int i=0;i<k;i++){
            pii p=v[i];
            if(!vis[p]){
                dfs(p);
                cout <<c<<endl;
                c=0;
            }

        }
        //cout << c<<endl;

    }
}
