#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int n;
    cin >>n;
    vector<int> p(n),v(n),l(n);
    for(int i=1;i<n;i++){
        cin >>p[i];
        p[i]--;
        //cout <<p[i]<<endl;
        v[p[i]]++;
        //cout <<v[p[i]]<<" "<<p[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(v[i]==0){l[p[i]]++;}
        //cout <<l[p[i]]<<" ";}
    }
    for(int i=0;i<n;i++){
        if(v[i]>0&&l[i]<3){cout <<"No"<<endl;return 0;}
    }
    cout <<"Yes"<<endl;
    return 0;

}
