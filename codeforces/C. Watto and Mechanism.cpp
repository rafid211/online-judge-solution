#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    node *next[4];
    bool done;
    node()
    {
        for(int i=0;i<4;i++)next[i]=NULL;
        done=0;
    }
}*nodeptr;

void build(nodeptr root,string s,int n)
{
    nodeptr curr=root;
    for(int i=0;i<n;i++){
        int id=s[i]-'a';
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
        }
        curr=curr->next[id];
    }
    curr->done=1;
    //curr->len=len;
}
bool f(nodeptr root,string s,int n)
{
    int c=0;
    nodeptr curr=root;
    bool ok=0;
    for(int i=0;i<n;i++){
        int id=s[i]-'a';
        if(curr->next[id]==NULL){ok=1;break;}
        curr=curr->next[id];
    }
    if(ok){
       for(int i=0;i<4;i++){
            curr=curr->next[i];
            if(curr->done){break;}
        }
    }
    //cout << (curr->done)<<" "<<ok<<endl;
   // return ((c==1&&curr->done)?true:false);
   return true;
}
int main()
{
    int n,m;
    cin >>n>>m;
    nodeptr root=new node();
    string s;
    for(int i=0;i<n;i++){
        cin >>s;
        for(int k=0;k<s.size();k++){
            cout <<s.substr(k)<<endl;
        }
        //build(root,s,s.size());
    }
    while(m--){
      // cin >>s;
       //bool ok=f(root,s,s.size());
      // cout <<((ok)?"YES":"NO")<<endl;
    }
    return 0;
}
