#include <bits/stdc++.h>
using namespace std;
#define out(x) cout <<x<<endl;
int main()
{
    int t,n,u,d;bool p;
    cin >>t;
    while(t--){
        cin >>n>>u>>d;
        int step=0,h[n];
        for(int i=0;i<n;i++)cin >>h[i];
        int i=0;p=1;
        while(i<n-1){
            if(h[i]<h[i+1]&&h[i+1]-h[i]<=u){i++;}
            else if(h[i]>h[i+1]&&h[i]-h[i+1]>d&&p){i++;p=0;}
            else if(h[i]>h[i+1]&&h[i]-h[i+1]<=d){i++;}
            else if(h[i]==h[i+1]){i++;}
            else{break;}
        }
        cout <<i+1<<endl;
    }
    return 0;
}
