#include <bits/stdc++.h>
using namespace std;
int con(string s)
{
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ans+= (int)pow(2,i);
        }
    }
    //cout <<ans<<endl;
    return ans;
}
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        bitset<32>b(n);
        string s=b.to_string();
       // cout <<s<<endl;
        next_permutation(s.begin(),s.end());
        //cout <<con(s)<<endl;
        cout <<"Case "<<++cnt<<": "<<con(s)<<endl;
    }
    return 0;
}
