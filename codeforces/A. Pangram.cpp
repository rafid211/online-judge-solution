#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin >>s;
    bool a[26];
    for(int i=0;i<26;i++){
        a[i]=false;
    }
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            a[s[i]-97]=true;
        }
        else{
            a[s[i]-65]=true;
        }
    }
    bool b;
    for(int i=0;i<26;i++){
        if(a[i]){
            b = true;
        }
        else{
            b=false;
            break;
        }
    }
    if(b){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
