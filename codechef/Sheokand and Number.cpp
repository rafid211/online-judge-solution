#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<int>s;
set<int>::iterator it,x;
void f()
{
    for(int i=0;i<=30;i++){
        int x = pow(2,i);
        for(int k=0;k<=30;k++){
            int y = pow(2,k);
            if(i!=k){s.insert(x+y);}
        }
    }
}
int main()
{
    f();
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        for(it=s.begin();it!=s.end();it++){
            if(*it>=n){
                x=it--;
                //cout <<*it<<" "<<*x<<endl;break;
                cout <<min(abs(*it-n),abs(*x-n))<<endl;
                break;
            }
        }
    }

    return 0;
}
