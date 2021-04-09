#include <iostream>
using namespace std;
int c=0;
typedef struct node
{
    node* next[124];
    node(){
        for(int i=0;i<124;i++)next[i]=NULL;
    }
}* nodeptr;
nodeptr root;
void getSubstr(string s,nodeptr r)
{
    nodeptr curr = r;
    int n = s.size();
    for(int i=0;i<n;i++){
       // s[i]=toupper(s[i]);
        int id = (int)s[i];
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
            c++;
        }
        curr = curr->next[id];
    }
}
int main()
{
   int t;
   cin >>t;
   while(t--){
      root = new node();
      c=0;
      string s;
      cin >>s;
      //getSubstr(s,root);
      for(int i=s.size()-1;i>=0;i--){
          getSubstr(s.substr(i),root);
          //cout<<s.substr(i)<<endl;c++;
      }
      cout <<c<<endl;
   }
   return 0;
}
