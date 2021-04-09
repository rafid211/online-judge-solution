#include <bits/stdc++.h>
using namespace std;
bool check(string sub)
{
    string rev = sub;
    reverse(rev.begin(),rev.end());
    return (rev==sub);
}
int main()
{
    string s;
    cin >>s;
    int ans=INT_MIN;
    for(int i=0;i<s.size();i++){
        //cout <<s.substr(i)<<endl;
        string r = s.substr(i);
        if(!check(r)){int len=r.size();
            ans = max(len,ans);
        }
    }
    cout <<((ans==INT_MIN)?0:ans)<<endl;
}
