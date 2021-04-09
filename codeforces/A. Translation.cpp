#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    string a;
    string b;
    cin >>a;
    cin >>b;
    int c=0;
    int len= a.size();
    //cout <<len<<endl;
    for(int i=len-1,j=0;i>=0;i--,j++){
        if(a[i]==b[j]){
            c++;
        }
    }
    if(c==len){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
