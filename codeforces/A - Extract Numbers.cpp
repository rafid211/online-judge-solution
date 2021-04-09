#include <bits/stdc++.h>
using namespace std;
#define i64 long long
vector <string> v;
void part(string s,i64 n);
void check();
void output(string a, string b);
int main()
{
    string s;
    getline(cin,s);
    //cout <<s;
    i64 n= s.size();
    part(s,n);
    return 0;
}

void part(string s,i64 n)
{
    i64 i=0;
    string a;

    while(i<n){
        if(s[i]==',' || s[i]==';'){
            v.push_back(a);
            i++;
            a.clear();
        }
        else{
            a+=s[i];
            i++;
            if(i==n){
                v.push_back(a);
            }
        }

    }
    if(s[n-1]==',' || s[n-1]==';'){
        v.push_back(a);
        }
//     for(i64 i=0;i<v.size();i++){
//        cout <<v[i]<<endl;
//    }
    check();
}
void check()
{
    string a,b;
    a+='"';
    b+='"';
    for(i64 i=0;i<v.size();i++){
        bool aa=false,bb=false;
        string s = v[i];
        if(s.length()==0){
            bb=true;
        }
        else if(s[0]>=65){
            b+=v[i];
            bb=true;
           // b+=',';
           // i++;
        }
        else if(s[0]>=49){
            bool num=true,dot=false;
            i64 x=s.length();
            for(i64 j=0;j<x;j++){
                if(s[j]>='A'){
                    num=false;
                }
                if(s[j]=='.'){
                    dot=true;
                }
            }
            if(num==false){
                b+=v[i];
                bb=true;
               // b+=',';
               // i++;
            }
            else if(dot==true){
                b+=v[i];
                bb=true;
            }
            else{
                a+=v[i];
                aa=true;
               // a+=',';
               // i++;
            }
           // cout <<"num "<<endl;
        }
        else if(s[0]=='0'){
            bool d=false;
            i64 x=s.length();
            for(i64 j=0;j<x;j++){
                if(s[j]=='.'){
                    d=true;
                }
            }
            if(d==true){
                b+=v[i];
                bb=true;
            }
            else if(x==1){
                a+=v[i];
                aa=true;
            }
            else if(x>1){
                b+=v[i];
                bb=true;
            }

        }

        if(aa==true){
            a+=',';
        }
        if(bb==true){
            b+=',';
        }
    }
    if(a.size()!=1) {
        a.resize(a.size()-1);

    }
    if(b.size()!=1){
        b.resize(b.size()-1);//cout <<"res"<<endl;
    }

   output(a,b);
}
void output(string a,string b)
{

    if(a.length()==1){
        cout <<"-"<<endl;
    }
    else{
        a+='"';
        cout <<a<<endl;
    }

    if(b.length()==1){
        cout <<"-"<<endl;
    }
    else {
        b+='"';
        cout <<b<<endl;
    }
}
