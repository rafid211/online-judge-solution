#include <iostream>
#include <cstdio>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define FOR(n) for(int i=0;i<n;i++)
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    fast;
    int m,n,a(0),pos=0,neg=0;
    cin >>n>>m;
    FOR(n){
        scanf("%d",&a);
        if(a>0){
            pos++;
        }
        else{
            neg++;
        }
    }
    int l=0,r=0;
    while(m--){
        scanf("%d %d",&l,&r);
        int dif = (r-l)+1;
        if(pos>=dif/2 && neg>=dif/2 && (dif%2==0)){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;

}
