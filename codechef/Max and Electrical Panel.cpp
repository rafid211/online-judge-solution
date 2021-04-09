#include <bits/stdc++.h>
using namespace std;

int x,f,l,c,n,mid,coin=1000,ans=1,i;
//fucked up
int main()
{
    scanf("%d %d",&n,&c);

   // bool a=0,b=0;
   f=1,l=n,x=0;
    for(i=f;i<=l;i+=500){
        if(x==1){
            printf("%d\n",2);
            fflush(stdout);
        }
        printf("%d %d\n",1,i);
        fflush(stdout);
        scanf("%d",&x);
        if(x==1){
            ans=i;
            l=i-1;break;
        }
        else{
            f=i+1;
        }
    }

    for(i=f;i<=l;i+=50){
        if(x==1){
            printf("%d\n",2);
            fflush(stdout);
        }
        printf("%d %d\n",1,i);
        fflush(stdout);
        scanf("%d",&x);
        if(x==1){
            ans=i;
            l=i-1;break;
        }
        else{
            f=i+1;
        }
    }

    for(i=f;i<=l;i+=10){
        if(x==1){
            printf("%d\n",2);
            fflush(stdout);
        }
        printf("%d %d\n",1,i);
        fflush(stdout);
        scanf("%d",&x);
        if(x==1){
            ans=i;
            l=i-1;break;
        }
        else{
            f=i+1;
        }
    }
    for(i=f;i<=l;i+=1){
        if(x==1){
            printf("%d\n",2);
            fflush(stdout);
        }
        printf("%d %d\n",1,i);
        fflush(stdout);
        scanf("%d",&x);
        if(x==1){
            ans=i;
            l=i-1;break;
        }
        else{
            f=i+1;
        }
    }
    printf("%d %d\n",3,ans);
    fflush(stdout);

    return 0;

}
