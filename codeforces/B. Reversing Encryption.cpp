#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>d;
    int n;
    cin >>n;
    string s;
    cin >>s;
    for(int i=1;i<=n;i++){
        if(n%i==0){d.push_back(i);}
    }
    sort(d.begin(),d.end());
    for(int i=0;i<d.size();i++){
        int len=d[i];
        reverse(s.begin(),s.begin()+len);
    }
    cout <<s<<endl;
    return 0;
}
