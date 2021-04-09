#include <bits/stdc++.h>
using namespace std;
bool ch[26];
int main()
{
    int n,k;
    cin >>n>>k;
    string s,r="";
    cin >>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        int x=s[i]-'a';
        if(!ch[x]){r.push_back(s[i]);ch[x]=1;}
    }
    int len=r.size();
    int i=0,c=0;//cout <<r<<endl;
    int p=0;
    while(i<len)
    {
        if(i+1<len){
            int a=r[i],b=r[i+1];
            if(a+1==b){c+=(r[i]-'a'+1);i+=2;p++;}
            else if(a+1<b){c+=(r[i]-'a'+1);i++;p++;}
            else i++;
        }
        else{
            int a=r[i-1],b=r[i];
            if(a+1<b){c+=(r[i]-'a'+1);p++;}
            i++;
        }
        if(p==k)break;
    }

    cout<<((p<k)?-1:c)<<endl;
    return 0;
}
