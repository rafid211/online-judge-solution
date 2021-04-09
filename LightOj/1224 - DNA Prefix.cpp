#include <bits/stdc++.h>
using namespace std;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
char ch[100];
typedef struct node
{
    node *next[4];
    int cnt;
    node()
    {
        for(int i=0;i<4;i++)next[i]=NULL;
        cnt=0;
    }
}*nodeptr;

nodeptr root=NULL;
int index(char c)
{
    if(c=='A')return 0;
    else if(c=='C')return 1;
    else if(c=='G')return 2;
    else if(c=='T')return 3;
}
void update(string s,int len)
{
    nodeptr cur=root;
    for(int i=0;i<len;i++){
        int id=index(s[i]);
        if(cur->next[id]==NULL){
            cur->next[id]=new node();
        }
        cur=cur->next[id];
        cur->cnt++;
    }
}
int prefix(string s,int len)
{
    nodeptr cur=root;
    int mx=INT_MIN;
    for(int i=0;i<len;i++){
        int id=index(s[i]);
        cur=cur->next[id];
        int n=cur->cnt;
        int p=n*(i+1);//cout <<p<<endl;
        mx=max(p,mx);
    }
    return mx;
}
void del(nodeptr cur)
{
    for(int i=0;i<4;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }
    delete(cur);
}
int main()
{
    //input;
    int t,cnt=0;
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
        int ans=INT_MIN;
        for(int i=0;i<v.size();i++){
            int num=prefix(v[i],v[i].size());
            ans=max(ans,num);
        }
        cout <<"Case "<<++cnt<<": "<<ans<<endl;
        del(root);
    }
    return 0;
}
