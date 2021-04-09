#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    node* next[26];
    int c=0;
    node()
    {
        for(int i=0;i<26;i++)next[i]=NULL;
        c=0;
    }
}* nodeptr;

void add(nodeptr root,string s,int index)
{
    //cout <<index<<endl;
    root->c+=1;
    if(index==s.size())return;
    int id = s[index]-'a';
    if(!root->next[id]){
        root->next[id]=new node();
    }
    add(root->next[id],s,index+1);
}
int cnt(nodeptr root,string s,int i)
{
    if(i==s.size()){
        return root->c;
    }
    else if(!root->next[s[i]-'a']){
        return 0;
    }
    else{
        return cnt(root->next[s[i]-'a'],s,i+1);
    }
}
int main()
{
    int n;
    cin >>n;
    nodeptr root = new node();
    while(n--){
        string a,b;
        cin >>a>>b;
        if(a=="add"){
            add(root,b,0);
        }
        else{
            cout <<cnt(root,b,0)<<endl;
        }
    }
    return 0;
}
