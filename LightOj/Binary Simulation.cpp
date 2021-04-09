#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
char bin[MAX];
int tree[MAX<<2];

void build(int node,int s,int e)
{

    if(s==e){
        tree[node]=0;
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=0;
}

void update(int node,int s,int e,int x,int y)
{
    if(y<s||x>e)return;
    if(x<=s&&e<=y){
       tree[node]++;
       return;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,x,y);
    update(2*node+1,mid+1,e,x,y);
   // tree[node]=tree[2*node]+tree[2*node+1];
}
int query(int node,int s,int e,int x)
{
    if(x<s||x>e)return 0;
    if(x==s&&x==e){
        return tree[node];
    }
    int mid=(s+e)/2;
    if(x<=mid){
       return query(2*node,s,mid,x)+tree[node];
    }
    else{
        return query(2*node+1,mid+1,e,x)+tree[node];
    }
}
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        memset(tree,0,sizeof(tree));
        scanf("%s",&bin);
        int n=strlen(bin);

        build(1,1,n);
        printf("Case %d:\n",++cnt);
        int q;
        scanf("%d",&q);
        getchar();
        while(q--){
            char bal;
            scanf("%c",&bal);
            getchar();
            if(bal=='I'){
                int i,j;
                scanf("%d %d",&i,&j);
                update(1,1,n,i,j);
                getchar();
            }
            else{
                int x;
                scanf("%d",&x);
                int ans=query(1,1,n,x);
                getchar();
                int p=bin[x-1]-48;
               // cout <<"x "<<bin[x-1]<<" "<<ans<<endl;
                if(ans%2==0){
                    printf("%d\n",p);
                }
                else{
                    printf("%d\n",p^1);
                }
            }
        }
    }
    return 0;
}
