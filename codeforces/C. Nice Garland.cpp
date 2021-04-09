#include <bits/stdc++.h>
using namespace std;

string a[10]={"BGR","BRG","GBR","GRB","RBG","RGB"};
int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    string temp=s;
    int c=INT_MAX;
    for(int idx=0;idx<6;idx++){
        string r=a[idx],go="";
        int x=0;
        for(int i=0;i<n;i++){
            go+=r[i%3];
            if(s[i]!=r[i%3])x++;
        }
        if(x<c){
            c=x;
            temp=go;
        }
    }
    cout <<c<<'\n'<<temp<<endl;
}

