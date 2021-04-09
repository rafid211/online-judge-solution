#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    vector <pair<char,char> >v;
    for(int i=0,cf='a',cl='z';i<13;i++,cf++,cl--){
        v.push_back(make_pair(cf,cl));
    }
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int n=s.size();
        for(int i=0;i<n;i++){
            int ch=s[i]-97+1;
            //cout <<ch<<" "<<endl;
            if(ch<=13){s[i]=(char)('z'-ch+1);}
            else{s[i]=(char)(26-ch+97);}
        }
        cout <<s<<endl;
    }
    return 0;
}
