#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int,ll>m;
bool cmp(const char a,const char b)
{
    return a>b;
}
ll fact(int n)
{
    return ((n==0)?1:n*fact(n-1));
}
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    sort(s.begin(),s.end(),cmp);
    int odd[4]={7,5,3,2};
    for(int i=2;i<10;i++){
        m[i]=fact(i);
    }
    vector <int> v;
    for(int i=0;i<n;i++){int num = s[i]-48;
        if(num==0||num==1){continue;}
        if(num==2){v.push_back(2);continue;}
        ll f = m[num];
        for(int k=0;k<4;k++){ll p=m[odd[k]];
            while(f%p==0){
                //cout <<f<<" "<<odd[k]<<" "<<num<<endl;
                v.push_back(odd[k]);
                f/=p;
            }
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    string ans="";
    for(int i=0;i<v.size();i++) ans.push_back((char)(v[i]+48));

    cout <<ans<<endl;
    return 0;
}
