#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin >>n>>m>>k;
    vector <int>v(m+1);
    for(int i=0;i<m+1;i++)cin >>v[i];

    int p = v[m],f=0;
    for(int i=0;i<m;i++){
        int x = v[i],c=0;
        for(int j=0;j<32;j++){
            bool a = 1&(x>>j);
            bool b = 1&(p>>j);
            //cout <<a<<" "<<j<<" "<<b<<endl;
            if(a!=b)c++;
        }//cout <<"c "<<c<<endl;
        if(c<=k){f++;}
    }
    cout <<f<<endl;
    return 0;
}
