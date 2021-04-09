#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    bool done;
    int index;
    node *next[30];
    node()
    {
        done=0;
        for(int i=0;i<30;i++){
            next[i]=NULL;
        }
    }
}*nodeptr;

bool update(nodeptr root ,string s,int ix)
{
    nodeptr curr=root;
    int n=s.size();
    for(int i=0;i<n;i++){
         int id=s[i]-'a';
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
        }
        curr=curr->next[id];
        if(curr->done)return 1;
    }
    curr->done=1;
    curr->index=ix;
    for(int i=0;i<30;i++){
        if(curr->next[i]!=NULL){
            return 1;
        }
    }
    return 0;
}
//int f(nodeptr root,string s)
//{
//    nodeptr curr=root;
//    bool ok=0;
//    int n=s.size();
//    for(int i=0;i<n;i++){
//        int id=s[i]-97;
//        curr=curr->next[id];
//        if(curr->done){
//
//        }
//    }
//    return curr->index;
//}
int main()
{
    nodeptr root=new node();
    int n;
    cin >>n;
    //vector<string>v(n);
    string s,v;
    bool done=0;
    for(int i=0;i<n;i++){
        cin >>v;
        bool ok=update(root,v,i);
        if(!done && ok){s=v;done=1;}
    }
//    for(int i=0;i<n;i++){
//        int x=f(root,v[i]);
//            //cout <<"BAD SET"<<endl;
//            cout <<x<<endl;
//            return 0;
//    }

    if(done){
        cout <<"BAD SET"<<endl;
        cout <<s<<endl;
        return 0;
    }
    cout <<"GOOD SET"<<endl;
    return 0;
}
