#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef struct node
{
    node* next[127];
    int cnt;
    bool marked;
    node()
    {
       for(int i=0;i<127;i++)next[i]=NULL;
       marked=0;
       cnt=0;
    }
}* nodeptr;
nodeptr root=NULL;
void update(string s)
{
    nodeptr curr=root;
    for(int i=0;i<s.size();i++){
        int id=s[i];
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
        }
        curr = curr->next[id];
    }
    curr->marked=1;
    curr->cnt+=1;
}
int get(string s,bool &ok)
{
    nodeptr curr=root;
    int len=s.size();
    for(int i=0;i<len;i++){
        int id=s[i];
        if(curr->next[id]==NULL){
            ok=0;
            return 0;
        }
        curr=curr->next[id];
    }
    ok=curr->marked;
    return curr->cnt;
}
void del(nodeptr cur)
{
    for(int i=0;i<127;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }
    delete(cur);
}

int words(string s)
{
    string w;
    stringstream ss(s);
    int c=1;bool ok;
    while(ss>>w){
        //cout <<w<<endl;
        if(w.size()>3){
            sort(w.begin()+1,w.end()-1);
        }
        int num = get(w,ok);
        if(ok)c*=num;
        else{c=0;break;}
    }
    return c;
}
int main()
{
    //input;
    //output;
    int t,caseno=0;
    cin >>t;
    while(t--){
        root = new node();
        int n;
        cin >>n;
        string s;
        for(int i=0;i<n;i++){
            cin >>s;
            if(s.size()>3){
                sort(s.begin()+1,s.end()-1);
            }
            update(s);
        }
        cin >>n;
        printf("Case %d:\n",++caseno);
        getchar();
        for(int i=0;i<n;i++){
            getline(cin,s);
            //cout <<s<<endl;
            printf("%d\n",words(s));
        }
        del(root);
    }
    return 0;
}
