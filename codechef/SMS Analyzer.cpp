#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;

int word(string str)
{
    string word;int c=0;
    stringstream iss(str);
    while (iss >> word){c++;
        if(word=="love"||
           word=="babe"||
           word=="sweety"||
           word=="life"){
            mp[word]++;
        }
    }
    return c;
}
int main()
{
    mp["love"]=0;
    mp["babe"]=0;
    mp["sweety"]=0;
    mp["life"]=0;
    string msg;
    getline(cin,msg);
    int n = word(msg);
    int c=0;
    map<string,int>::iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        c+=it->second;
    }
    int i=c;
    if(n%i==0){
        c/=i;
        n/=i;
    }
    cout <<c<<"/"<<n<<endl;
    return 0;
}
