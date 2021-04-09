#include <bits/stdc++.h>
using namespace std;
bool check[27];
stack <int> pos;
stack <char> ch;
void complete(string s)
{
    for(int p=0;p<26;p++){
        if(check[p]==false){
            char c=p+65;
            ch.push(c);
            }
        }
    while(!pos.empty()){
        int m;
        char c;
        if(!ch.empty()){
            m=pos.top();
            c=ch.top();
            ch.pop();
            pos.pop();
        }
        else{
            m=pos.top();
            pos.pop();

        }
            s[m]=c;
        }
    cout <<s<<endl;

}
void findWord(string s,int i,int j,int n)
{
      int blank=0,l=0,dif;
      while(j<=n-1){
            if(s[j]=='?'){
                pos.push(j);
                blank++;
                j++;
            }
            else{
                int index=s[j]-65;
                if(check[index]==false){
                    check[index]=true;
                    j++;
                }
                else{
                    i=j;
                    memset(check,false,26);
                }
            }
      }
      //cout <<i<<" "<<j<<endl;
      if((j-i)>=26){
        complete(s);
      }
      else{
        cout <<-1<<endl;
      }
   // complete(s);

}
int main()
{
    string word;
    cin >>word;
    int n=word.length();
    memset(check,false,26);

    if(n<26){
        cout <<-1<<endl;
    }
    else{
        findWord(word,0,0,n);
    }
}
