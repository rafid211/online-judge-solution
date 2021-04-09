#include <bits/stdc++.h>
using namespace std;
#define i64 long long
vector <int> a;
map <int,int> m;
int ans = 0;

int main (){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int in;
        cin >>in;
        a.push_back(in);
    }
    for(int i=0;i<n;i++){
       int index = a[i];
        m[index]++;
        ans = max(ans,m[index]);
    }
    cout << ans << endl;
    return 0;
}
