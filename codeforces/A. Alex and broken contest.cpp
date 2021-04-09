#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name[5]=  {"Danil","Olya","Slava","Ann","Nikita"};
    string s,temp;
    cin >>s;
    int found=0,n,go;
    for(int i=0;i<5;i++){
        string na=name[i];
        n = s.find(na);
        if(n!=-1){
            temp=name[i];//cout <<temp<<endl;
            go=n;
            found++;
        }
    }
    bool flag=false;
    if(found==1){
        for(int i=0;i<5;i++){
            int index = s.find(name[i],go+temp.size());
            //cout <<index<<endl;
            if(index==-1){
                flag=true;
            }
            else{flag=false;break;}
        }
    }
    else{
        flag=false;
    }

    cout <<((flag)?"YES":"NO")<<endl;
    return 0;
}
