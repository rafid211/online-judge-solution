#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int pos = 0,neg =0;
    for(int i=1;i<=n;i++) {
        int x, y;
        cin >>x>>y;
        if (x < 0){
            neg++;
        }
        else{
            pos++;
        }
    }

    if(pos<=1 || neg<=1){
        cout <<"Yes"<<endl;
    }
    else{
        cout <<"No"<<endl;
    }
    return 0;
}

