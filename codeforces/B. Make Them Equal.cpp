#include <bits/stdc++.h>
using namespace std;
bool d[200];
int main()
{
    int n;
    cin >>n;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin >>a;
        if(!d[a])v.push_back(a),d[a]=1;
    }
    if(v.size()==1){
        cout << 0<<endl;
        return 0;
    }
    if(v.size()==2){
        int x= abs(v[0]-v[1]);
        if(x%2==0)cout << x/2<<endl;
        else cout << x<<endl;
        return 0;
    }
    if(v.size()>3){
        cout << -1<<endl;
        return 0;
    }
    sort(v.begin(),v.end(),greater<int>());
    map<int,bool>m;
    int x=0,c=0;
    for(int i=0;i<v.size()-1;i++){
        int dif=v[i]-v[i+1];
        if(!m[dif]){
            m[dif]=1;
            x=dif;
            c++;
        }
    }
    if(c==1){cout << x<<endl;}
    else cout <<-1<<endl;





}
