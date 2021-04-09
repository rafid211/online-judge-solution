#include <bits/stdc++.h>
using namespace std;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
typedef struct node
{
    node *next[11];
    int cnt;
    bool marked;
    node()
    {
        for(int i=0;i<11;i++)next[i]=NULL;
        cnt=0;
        marked=0;
    }
}*nodeptr;

nodeptr root=NULL;
void update(string s, int len)
{
    nodeptr curr=root;
    for(int i=0;i<len;i++){
        int id=s[i]-48;
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
        }
        curr=curr->next[id];
        curr->cnt++;
    }
    curr->marked=1;
}
bool check(string s,int len)
{
    nodeptr curr=root;
    for(int i=0;i<len;i++){
        int id=s[i]-48;
        curr=curr->next[id];
    }
    if(curr->cnt>=2&&curr->marked)return true;
    else return false;
}
void del(nodeptr cur)
{
    for(int i=0;i<11;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }
    delete(cur);
}
int main()
{
   // input;
    int t,caseno=0;
    scanf("%d",&t);
    while(t--){
        root=new node();
        int n;
        scanf("%d",&n);
        vector<string>v;
        while(n--){
            string s;
            cin >>s;
            v.push_back(s);
            update(s,s.size());
        }
        bool con=0;
        for(int i=0;i<v.size();i++){
            bool ok=check(v[i],v[i].size());
            if(ok){con=1;break;}
        }
        cout <<"Case "<<++caseno<<": "<<((con)?"NO":"YES")<<endl;
        del(root);
    }
    return 0;
}
