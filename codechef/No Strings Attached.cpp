#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int c=0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){

                if(i!=j&&i<j&&s[i]<s[j])c++;
            }
        }cout <<c<<endl;
    }
    return 0;
}
