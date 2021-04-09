#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0')){
            swap(s[i],s[i+1]);
        }
        else if((s[i]=='1'&&s[i+1]=='2')||(s[i]=='2'&&s[i+1]=='1')){
            swap(s[i],s[i+1]);
        }
    }
    cout <<s<<endl;
    return 0;
}
