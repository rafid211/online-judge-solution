#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll fish,rabbit,chik;
    cin >>fish>>rabbit>>chik;
    ll x=(fish/3);
    ll y=(rabbit/2);
    ll z=(chik/2);

    ll mn=min(x,min(y,z));
    fish-=mn*3;
    rabbit-=mn*2;
    chik-=mn*2;
    mn*=7;
    ll ans=mn;
   // cout <<fish<<" "<<rabbit<<" "<<chik<<endl;
    //fish=fish%3;rabbit=rabbit%2;chik=chik%2;
    x=fish,y=rabbit,z=chik;
    ll go=0;
    for(int i=1;i<=7;i++){
        ll c=0;
        fish=x,rabbit=y,chik=z;
        for(int j=i;j<=7;){
            if(j==1){
                if(!rabbit)break;
                else c++,rabbit--;
                j++;
            }
            else if(j==2){
                if(!fish)break;
                else c++,fish--;
                j++;
            }
            else if(j==3){
                if(!fish)break;
                else c++,fish--;
                j++;
            }
            else if(j==4){
                if(!rabbit)break;
                else c++,rabbit--;
                j++;
            }
            else if(j==5){
                if(!chik)break;
                else c++,chik--;
                j++;
            }
            else if(j==6){
                if(!fish)break;
                else c++,fish--;
                j++;
            }
            else if(j==7){
                if(!chik)break;
                else{
                    chik--;
                    c++;
                    j=1;
                }
            }
        }
        //cout <<c<<endl;
        go=max(go,c);
    }
    cout <<ans+go<<endl;

    return 0;
}
