#include <bits/stdc++.h>
using namespace std;

int a[30],node[30][30];
bool vis[30];
char ans[30];
void dfs(int s,int n)
{
    //cout << s<<endl;
    if(s==n){
      ans[s]='\0';
      //cout << s<<endl;
      puts(ans);
      return;
    }
    for(int i=0;i<30;i++){
        if(a[i]&&!vis[i]){
            for(int j=0;j<30;j++){
                if(node[i][j]&&vis[j]){
                    return;
                }
            }
            vis[i]=1;
            ans[s]= (i+'a');
            dfs(s+1,n);
            vis[i]=0;
        }
    }
}
int main()
{
    string s;
    bool line=0;
    while(getline(cin,s))
    {
        if(line)puts("");
        line=1;
        memset(node,0,sizeof(node));
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
        stringstream buf(s);
        string ch;
        int len=0;
        while(buf>>ch)
        {
            int c=ch[0];
            a[c-'a']=1;
        }
        int n=0;
        for(int i=0;i<30;i++)n+=a[i];
        string ss;
        getline(cin,ss);
        stringstream bal(ss);
        string ch1,ch2;
        while(bal >> ch1>> ch2)
        {
            int c1=ch1[0],c2=ch2[0];
            node[c1-'a'][c2-'a']=1;
        }
        //cout << "psd"<<endl;
        dfs(0,n);

    }
    return 0;

}
