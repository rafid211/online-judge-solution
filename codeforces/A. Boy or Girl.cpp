#include <bits/stdc++.h>
using namespace std;
vector<char> v;
int main()
{
    string name;
    getline(cin,name);
    bool flag = false;
    int len = name.length(),c=0;
    for(int i=0;i<len;i++){
        flag = false;
        for(int j=0;j<i;j++){
            if(name[j]==name[i]){
                flag = true;
                break;
            }
        }
        if(!flag){
            c++;
        }
    }
    if(c%2==0){
        cout <<"CHAT WITH HER!"<<endl;
    }
    else{
        cout <<"IGNORE HIM!"<<endl;
    }
    return 0;
}
