#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    vector <int>v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    int hour=0,a;
    vector <int>m;
    for(int i=0;i<n;i++){
        hour=0;
        a=v[i];
        if(a==k){
            cout <<1<<endl;
            return 0;
        }
        else{int temp = 1,var;
           while(true){
              var = temp*a;
              hour++;//cout <<var<<endl;
              temp++;
              if(var>k){hour=0;break;}
              if(var==k){
                 m.push_back(hour);//cout <<hour<<endl;
              }
           }
        }
    }
    sort(m.begin(),m.end());
    cout <<m[0]<<endl;
    return 0;
}
