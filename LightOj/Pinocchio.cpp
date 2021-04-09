#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        bool num[51];
        for(int i=0;i<51;i++){num[i]=0;}
        for(int i=0;i<n;i++){cin>>a[i];num[a[i]]=1;}
        int c=0;
        vector<int>v;
        for(int i=0;i<51;i++){
            if(num[i]){
               v.push_back(i);
            }
        }
        int dif=(v[0]-2);
        if(dif>=1){
            if(dif>=5){
                c+=(dif/5);
                if(dif%5!=0)c++;
            }
            else c++;
        }
        for(int i=0;i<v.size()-1;i++){
            int dif = v[i+1]-v[i];
            if(dif>=1){
               if(dif>=5){
                    c+=(dif/5);
                    if(dif%5!=0)c++;
               }
               else{
                 c++;
                }
            }
        }
        cout <<"Case "<<++cnt<<": "<<c<<endl;
    }
    return 0;
}
