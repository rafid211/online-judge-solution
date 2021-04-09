#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    if(n%a==0) {
        ll temp=n/a;
        cout << "YES" << endl;
        cout << temp << " " << 0 << endl;
    }
    else if(n%b==0) {
        ll temp=n/b;
        cout << "YES" << endl;
        cout << 0 << " " << temp << endl;
    }
    else {
        if(a==b) cout << "NO" << endl;
        else {
            bool flag=0;
            ll temp=n, countx=0;
            while(temp>0) {
                if(temp%a==0) {
                    cout << "YES" << endl;
                    cout << temp/a << " " << countx << endl;
                    return 0;
                }
                else {
                    countx++;
                    temp-=b;
                }
            }
            cout << "NO" << endl;
        }
    }
}
