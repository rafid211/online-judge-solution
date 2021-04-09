#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    string s;
    string h = "hello";
    cin >>s;
    int len = s.size();
    int i=0,j=0;
    int c=0;
    while(i<len){
        if(s[i]==h[j]){
            j++;
            c++;
        }
        i++;
    }
    if(c==h.length()){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }

    return 0;
}
