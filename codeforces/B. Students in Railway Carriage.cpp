#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c=0,t=1;
    cin >> n >> a >> b;
    string s;cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*'){continue;}
        else if(s[i]=='.') {
            if(a<b) {
                if(s[i-1]!='B'&&b!=0){s[i]='B';b--;c++;}
                else if(s[i-1]!='A'&&a>0){s[i]='A';a--;c++;}
            }
            else{
                if (s[i - 1] != 'A' and a > 0) s[i] = 'A', a--, c++;
                else if (s[i - 1] != 'B' and b > 0) s[i] = 'B', b--, c++;
            }
        }
    }

    cout << c << endl;
}
